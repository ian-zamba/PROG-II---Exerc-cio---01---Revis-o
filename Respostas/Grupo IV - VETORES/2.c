/*2. Fazer um programa que le um conjunto de 10 valores e os imprime ordenados.*/

#include <stdio.h>
#include <string.h>
#include <math.h>

int main(void) {
    
    int vet[10];
    int aux;

    for (int i = 0; i < 10; i++){
        printf("Informe o %d numero: ", i+1);
        scanf("%d", &vet[i]);
    }

    for (int i = 0; i < 10; i++) {
      for (int j = i + 1; j < 10; j++) {
        if(vet[i] > vet[j]){
            aux = vet[i];
            vet[i] = vet[j];
            vet[j] = aux;
        }
      }
    }

    for (int i = 0; i < 10; i++){
        printf("%d ", vet[i]);
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