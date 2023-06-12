#include <stdio.h>

int main(int argc, char **argv)
{
  printf("\n%d argumentos\n", argc);
  if(argc>1){
    FILE* ptr = fopen(argv[1], "r");
      if (ptr == NULL) {
          printf("Arquivo não existe!!");
          return 0;
      }
      char temp;
      fscanf(ptr, "%s", &temp);
      printf("Leitura arquivo: %c\n", temp);
  }       
}
