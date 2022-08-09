/*1. Faca um programa que le dois valores e imprime:
- se o primeiro valor for menor que o segundo, a lista de valores do primeiro
ate o segundo;
- se o primeiro valor for maior que o segundo a lista de valores do segundo
ate o primeiro em ordem decrescente;
- se ambos forem iguais a mensagem ”valores iguais”.
*/

#include <stdio.h>
#include <string.h>
#include <math.h>

int main(void) {

    int a, b;

    printf("Informe o primeiro numero: ");
    scanf("%d", &a);

    printf("Informe o segundo numero: ");
    scanf("%d", &b);

    if(a == b){
        printf("Valores iguais");
    }else if(a < b){
        for(int i = a; i <= b; i++){
            printf("%d\n",i);
        }
    }else{
        for(int i = a; i >= b; i--){
            printf("%d\n", i);
        }
    }

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