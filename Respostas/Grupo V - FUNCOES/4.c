/*Fazer um programa que solicita o total gasto pelo cliente de uma loja, 
imprime asopcoes de pagamento, solicita a opcao desejada e imprime o 
valor total das prestacoes (se houverem).
1) Opcao: a vista com 10% de desconto;
2) Opcao: em duas vezes (preco da etiqueta);
3) Opcao: de 3 ate 10 vezes com 3% de juros ao mes (somente para compras acima
de R$ 100,00).
*/

#include <stdio.h>
#include <string.h>
#include <math.h>

void opcao1(float valor){

    float novovalor = valor - (valor * 0.1);
    printf("Valor Total: R$%.2f\n", novovalor);
    printf("Quantidade de parcelas: 1\n");
    printf("Valor das parcelas: R$%.2f\n", novovalor);

}

void opcao2(float valor){

    float novovalor = valor / 2;
    printf("Valor Total: R$%.2f\n", valor);
    printf("Quantidade de parcelas: 2\n");
    printf("Valor das parcelas: R$%.2f\n", novovalor);

}

void opcao3(float valor, int parcelas){

    float novovalor = valor + valor * 0.03 * parcelas;
    printf("Valor Total: R$%.2f\n", novovalor);
    printf("Quantidade de parcelas: %d\n", parcelas);
    printf("Valor das parcelas: R$%.2f\n", novovalor / parcelas);

}

float opcoes(float valor){
    
    int op, parcelas;
    float vp;

    printf("1) Opcao: a vista com 10%% de desconto\n");
    printf("2) Opcao: em duas vezes (preco da etiqueta)\n");
    if(valor > 100){
        printf("3) Opcao: de 3 ate 10 vezes com 3%% de juros ao mes (somente para compras acima de R$ 100,00)\n");
    }

    printf("Opcao: ");
    scanf("%d", &op);

    if(valor <= 100){
        while (op != 1 && op != 2){
            printf("Opcao invalida, tente novamente: ");
            scanf("%d", &op);
        }
    }else{
        while (op != 1 && op != 2 && op != 3){
            printf("Opcao invalida, tente novamente: ");
            scanf("%d", &op);
        }
    }

    if(op == 1){
        opcao1(valor);
    }
    
    if(op == 2){
        opcao2(valor);
    }
    if(op == 3){
        printf("Informe o numero de parcelas: ");
        scanf("%d", &parcelas);
        while (parcelas < 3 || parcelas > 10){
            printf("Quantidade de parcelas invalida, tente novamente: ");
            scanf("%d", &parcelas);
        }

        opcao3(valor, parcelas);
    }

}


int main(void) {
    
    float valor;

    printf("Total gasto: ");
    scanf("%f", &valor);

    opcoes(valor);

    return 0;
}


/*

                 .eeeeeeeee
                .$$$$$$$$P"
               .$$$$$$$$P
              z$$$$$$$$P
             z$$$$$$$$"
            z$$$$$$$$"
           d$$$$$$$$"
          d$$$$$$$$"
        .d$$$$$$$P
       .$$$$$$$$P
      .$$$$$$$$$.........
     .$$$$$$$$$$$$$$$$$$"
    z$$$$$$$$$$$$$$$$$P"
   -**********$$$$$$$P
             d$$$$$$"
           .d$$$$$$"
          .$$$$$$P"
         z$$$$$$P
        d$$$$$$"
      .d$$$$$$"
     .$$$$$$$"
    z$$$$$$$beeeeee
   d$$$$$$$$$$$$$*
  ^""""""""$$$$$"
          d$$$*
         d$$$"
        d$$*
       d$P"
     .$$"
    .$P"
   .$"
  .P"
 ."
/"

ZAMBA
*/