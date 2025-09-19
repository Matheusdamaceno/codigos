
    function exemplo1() {
      const numeroSecreto = Math.floor(Math.random() * 10) + 1;
      let tentativa = 0;
      let chute;

      while (true) {
        const entrada = prompt("Adivinhe o número secreto (entre 1 e 10):");

        if (entrada === null) {
          alert("Você saiu do jogo.");
          break;
        }

        chute = Number(entrada);
        tentativa++;

        if (isNaN(chute)) {
          alert("Por favor, digite um número válido.");
          continue;
        }

        if (chute === numeroSecreto) {
          alert(`Parabéns! Você acertou em ${tentativa} tentativa(s)!`);
          break;
        } else if (chute < numeroSecreto) {
          alert("Errado! O número secreto é MAIOR que o digitado.");
        } else {
          alert("Errado! O número secreto é MENOR que o digitado.");
        }
      }
    }

    function exemplo2() {
      const qtdNotas = Number(prompt("Quantas notas deseja informar para o cálculo da média?"));

      if (isNaN(qtdNotas) || qtdNotas <= 0) {
        alert("Quantidade inválida.");
        return;
      }

      let soma = 0;

      for (let i = 1; i <= qtdNotas; i++) {
        const nota = Number(prompt(`Digite a nota ${i}:`));

        if (isNaN(nota)) {
          alert("Valor inválido. Tente novamente.");
          i--; // repete a mesma iteração
          continue;
        }

        soma += nota;
      }

      const media = soma / qtdNotas;

      alert(`A média das ${qtdNotas} nota(s) é ${media.toFixed(2)}.\nVocê está ${media >= 6 ? "aprovado!" : "reprovado."}`);
    }

    function exemplo3() {
      const n1 = Number(prompt("Digite o primeiro número:"));
      const n2 = Number(prompt("Digite o segundo número:"));
      const soma = n1 + n2;

      if (isNaN(soma)) {
        alert("Erro: Por favor, digite apenas números.");
      } else {
        alert(`A soma de ${n1} + ${n2} é igual a ${soma}.`);
      }
    }