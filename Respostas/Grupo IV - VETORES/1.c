/*1. Fazer um programa que le 10 valores e imprime o maior e o menor valores lidos.*/

#include <stdio.h>
#include <string.h>
#include <math.h>

int main(void) {
    
    int vet[10];
    int maior, menor;

    for (int i = 0; i < 10; i++){
        printf("Informe o %d numero: ", i+1);
        scanf("%d", &vet[i]);

        if(i == 0){
            maior = vet[0];
            menor = vet[0];
        }

        if(vet[i] > maior){
            maior = vet[i];
        }
        if(vet[i] < menor){
            menor = vet[i];
        }
    }
    
    printf("Maior dos numeros: %d\n", maior);
    printf("Menor dos numeros: %d\n", menor);

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