//Matheus Martins Damaceno 2475510
//Leonardo dos Santos Correia 2475499

#include <stdio.h>
#include <stdlib.h>

#define ORDEM 3

// struct 'no' da b tree
typedef struct No
{
    int chaves[2 * ORDEM - 1];
    struct No *filhos[2 * ORDEM];
    int num_chave;
    int folha;
} No;

No *criaNo()
{
    No *novoNo = (No *)malloc(sizeof(No));
    novoNo->num_chave = 0;
    novoNo->folha = 1;
    return novoNo;
}

// Função Split que divide o nó em dois
void split(No *pai, int index, No *filho)
{
    No *novoFilho = criaNo();
    novoFilho->folha = filho->folha;
    novoFilho->num_chave = ORDEM - 1;

    for (int i = 0; i < ORDEM - 1; i++)
    {
        novoFilho->chaves[i] = filho->chaves[i + ORDEM];
    }

    if (!filho->folha)
    {
        for (int i = 0; i < ORDEM; i++)
        {
            novoFilho->filhos[i] = filho->filhos[i + ORDEM];
        }
    }

    filho->num_chave = ORDEM - 1;

    for (int i = pai->num_chave; i > index; i--)
    {
        pai->filhos[i + 1] = pai->filhos[i];
    }

    pai->filhos[index + 1] = novoFilho;

    for (int i = pai->num_chave; i > index; i--)
    {
        pai->chaves[i] = pai->chaves[i - 1];
    }

    pai->chaves[index] = filho->chaves[ORDEM - 1];
    pai->num_chave++;
}

// A função getDir encontra a chave mais à direita em uma subárvore
int getDir(No *node)
{
    while (!node->folha)
    {
        node = node->filhos[node->num_chave];
    }
    return node->chaves[node->num_chave - 1];
}

// //A função getEsq encontra a chave mais à direita em uma subárvore
int getEsq(No *node)
{
    while (!node->folha)
    {
        node = node->filhos[0];
    }
    return node->chaves[0];
}

// A função merge combina nós
void merge(No *node, int filho_key)
{
    No *filho = node->filhos[filho_key];
    No *prox_filho = node->filhos[filho_key + 1];

    filho->chaves[filho->num_chave] = node->chaves[filho_key];
    filho->num_chave++;

    for (int i = 0; i < prox_filho->num_chave; i++)
    {
        filho->chaves[filho->num_chave + i] = prox_filho->chaves[i];
    }

    if (!filho->folha)
    {
        for (int i = 0; i <= prox_filho->num_chave; i++)
        {
            filho->filhos[filho->num_chave + i] = prox_filho->filhos[i];
        }
    }

    for (int i = filho_key; i < node->num_chave - 1; i++)
    {
        node->chaves[i] = node->chaves[i + 1];
    }

    for (int i = filho_key + 1; i < node->num_chave; i++)
    {
        node->filhos[i] = node->filhos[i + 1];
    }

    node->num_chave--;
    free(prox_filho);
}

// A função insertNonFull insere uma chave em um nó de uma árvore B que ainda não está cheio
void insertNonFull(No *node, int key)
{
    int i = node->num_chave - 1;

    if (node->folha)
    {
        while (i >= 0 && key < node->chaves[i])
        {
            node->chaves[i + 1] = node->chaves[i];
            i--;
        }
        node->chaves[i + 1] = key;
        node->num_chave++;
    }
    else
    {
        while (i >= 0 && key < node->chaves[i])
        {
            i--;
        }
        i++;
        if (node->filhos[i]->num_chave == 2 * ORDEM - 1)
        {
            split(node, i, node->filhos[i]);
            if (key > node->chaves[i])
            {
                i++;
            }
        }
        insertNonFull(node->filhos[i], key);
    }
}

// Insere na b tree
void insert(No **valor, int key)
{
    No *valorNo = *valor;

    if (valorNo->num_chave == 2 * ORDEM - 1)
    {
        No *novoValor = criaNo();
        novoValor->folha = 0;
        novoValor->filhos[0] = valorNo;
        *valor = novoValor;
        split(novoValor, 0, valorNo);
        insertNonFull(novoValor, key);
    }
    else
    {
        insertNonFull(valorNo, key);
    }
}

// Devolve a impressão da arvore em ordem
void em_ordem(No *node)
{
    if (node)
    {
        int i;
        for (i = 0; i < node->num_chave; i++)
        {
            em_ordem(node->filhos[i]);
            printf("%d ", node->chaves[i]);
        }
        em_ordem(node->filhos[i]);
    }
}

// Essa função encontra o valor da chave do nó
int achar_chave(No *node, int key)
{
    int index = 0;
    while (index < node->num_chave && key > node->chaves[index])
    {
        index++;
    }
    return index;
}

// Essa função empresta chave extra do seu irmão da direita
void emprestaDir(No *node, int filho_key)
{
    No *filho = node->filhos[filho_key];
    No *dir = node->filhos[filho_key + 1];

    filho->chaves[filho->num_chave] = node->chaves[filho_key];
    filho->num_chave++;

    node->chaves[filho_key] = dir->chaves[0];

    if (!filho->folha)
    {
        filho->filhos[filho->num_chave] = dir->filhos[0];
    }

    for (int i = 0; i < dir->num_chave - 1; i++)
    {
        dir->chaves[i] = dir->chaves[i + 1];
    }

    if (!dir->folha)
    {
        for (int i = 0; i < dir->num_chave; i++)
        {
            dir->filhos[i] = dir->filhos[i + 1];
        }
    }

    dir->num_chave--;
}

// Essa função empresta chave extra do seu irmão da esquerda
void emprestaEsq(No *node, int filho_key)
{
    No *filho = node->filhos[filho_key];
    No *esq = node->filhos[filho_key - 1];

    for (int i = filho->num_chave; i > 0; i--)
    {
        filho->chaves[i] = filho->chaves[i - 1];
    }

    if (!filho->folha)
    {
        for (int i = filho->num_chave + 1; i > 0; i--)
        {
            filho->filhos[i] = filho->filhos[i - 1];
        }
    }

    filho->chaves[0] = node->chaves[filho_key - 1];
    filho->num_chave++;

    node->chaves[filho_key - 1] = esq->chaves[esq->num_chave - 1];

    if (!filho->folha)
    {
        filho->filhos[0] = esq->filhos[esq->num_chave];
    }

    esq->num_chave--;
}

void remover(No *node, int key)
{
    int index = achar_chave(node, key);

    if (index < node->num_chave && node->chaves[index] == key)
    {
        if (node->folha)
        {
            // Caso 1: A chave esta no nó folha.
            for (int i = index; i < node->num_chave - 1; i++)
            {
                node->chaves[i] = node->chaves[i + 1];
            }
            node->num_chave--;
        }
        else
        {
            // Caso 2: A chave esta em um nó interno.
            No *right = node->filhos[index];
            No *left = node->filhos[index + 1];

            if (right->num_chave >= ORDEM)
            {
                // Subcaso 2-a: O nó predecessor tem chaves suficientes para substituir.
                int rightKey = getDir(right);
                remover(right, rightKey);
                node->chaves[index] = rightKey;
            }
            else if (left->num_chave >= ORDEM)
            {
                // Subcaso 2-b: O nó sucessor tem chaves suficientes para substituir.
                int leftKey = getEsq(left);
                remover(left, leftKey);
                node->chaves[index] = leftKey;
            }
            else
            {
                // Subcaso 2-c: Merge o nó com o nó sucessor e remova a chave.
                merge(node, index);
                remover(right, key);
            }
        }
    }
    else
    {
        if (node->folha)
        {
            printf("Não foi encontrado o %d na arvore\n", key);
            return;
        }

        int filho_key = index;
        if (index == node->num_chave)
        {
            filho_key = index - 1;
        }

        No *filho = node->filhos[filho_key];

        if (filho->num_chave < ORDEM)
        {
            // Caso 3: Garanta que o filho tem pelo menos t chaves.
            if (filho_key != node->num_chave && node->filhos[filho_key + 1]->num_chave >= ORDEM)
            {
                // Subcaso 3-a: Se o filho à direita tiver pelo menos t chaves, empreste uma chave do filho à direita.
                emprestaDir(node, filho_key);
            }
            else if (filho_key != 0 && node->filhos[filho_key - 1]->num_chave >= ORDEM)
            {
                // Subcaso 3-b: Se o filho à esquerda tiver pelo menos t chaves, empreste uma chave do filho à esquerda.
                emprestaEsq(node, filho_key);
            }
            else
            {
                // Subcaso 3-c: Funda o filho com o próximo nó.
                if (filho_key != node->num_chave)
                {
                    merge(node, filho_key);
                }
                else
                {
                    merge(node, filho_key - 1);
                }
            }
        }

        remover(filho, key);
    }
}

int main()
{
    No *root = criaNo();

    insert(&root, 64);
    insert(&root, 87);
    insert(&root, 45);
    insert(&root, 65);
    insert(&root, 12);

    em_ordem(root);
    printf("\n");

    //utilizando as funções
    insert(&root, 32);
    insert(&root, 99);
    remover(root, 45);
    remover(root, 12);

    printf("Arvore alterada: ");
    em_ordem(root);

    return 0;
}
