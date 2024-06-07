#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
  int escolha, produto, quantidade;
  float caixa, totalCompra = 0.0f;
  int resposta;

  do {
    puts("---------- BEM-VINDO À PANIFICADORA NINI ----------");
    puts("");
    puts("PRODUTOS");
    puts("1- Pão (R$3,67)");
    puts("2- Leite (R$5,79)");
    puts("3- Café (R$7,89)");
    puts("4- Bolo (R$26,00)");
    puts("5- Sanduíche (R$11,90)");
    puts("6- Chocolate (R$4,99)");
    puts("7- Cookie (R$5,60)");
    puts("8- Toddynho (R$3,59)");
    puts("9- Água (R$2,99)");
    puts("10- Suco (R$4,99)");

    //Digitação e validação dos códigos dos produtos
    printf("Digite o código do produto desejado (1 a 10): ");
    while (scanf("%d", &escolha) != 1 || escolha < 1 || escolha > 10) {
      printf("Código inválido. Digite novamente: ");
      scanf("%*c"); // Limpar buffer de entrada
    }

    //Digitação da quantidade de produtos
    printf("Insira a quantidade desejada: ");
    scanf("%d", &quantidade);

    //Definição dos preços através dos códigos dos produtos
    switch (escolha) {
      case 1:
        caixa = 3.67f * quantidade;
        break;
      case 2:
        caixa = 5.79f * quantidade;
        break;
      case 3:
        caixa = 7.89f * quantidade;
        break;
      case 4:
        caixa = 26.00f * quantidade;
        break;
      case 5:
        caixa = 11.90f * quantidade;
        break;
      case 6:
        caixa = 4.99f * quantidade;
        break;
      case 7:
        caixa = 5.60f * quantidade;
        break;
      case 8:
        caixa = 3.59f * quantidade;
        break;
      case 9:
        caixa = 2.99f * quantidade;
        break;
      case 10:
        caixa = 4.99f * quantidade;
        break;
      default:
        printf("PRODUTO INVÁLIDO!");
        break;
    }
    
    // Mostra o valor do produto atual
    printf("O valor total do produto é: R$%.2f\n", caixa);
    
    // Soma o valor do produto ao total da compra
    totalCompra += caixa; 

    printf("Deseja finalizar a compra (0 = Não, 1 = Sim) ?\n");
    while (scanf("%d", &resposta) != 1 || resposta < 0 || resposta > 1) {
      printf("Opção inválida. Digite novamente (0 ou 1): ");
      scanf("%*c");
    }

    if (resposta == 1) {
      printf("\nO valor total da compra é: R$%.2f\n", totalCompra);
      printf("Obrigado por comprar na Panificadora Nini!\n");
      break; // Sai do loop 'do-while' após finalizar a compra
    }
  } while (resposta == 0);

  return 0;
}
