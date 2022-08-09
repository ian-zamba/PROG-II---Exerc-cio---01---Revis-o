/*5. Fazer um programa que le um conjunto de 10 valores inteiros
e verifica se algum dos valores e igual a media dos mesmos.
*/

#include <stdio.h>
#include <string.h>
#include <math.h>

int main(void) {
    
    int vet[10];
    float media;
    int soma = 0;
    int cont = 0;

    for (int i = 0; i < 10; i++) {
        printf("informe o %d numero: ", i + 1);
        scanf("%d", &vet[i]);
        soma += vet[i];
    }

    media = soma / 10;

    printf("Numeros iguais a media:\n");
    for (int i = 0; i < 10; i++) {
        if(vet[i] == media){
            cont++;
            printf("numero %d: %d\n", i + 1, vet[i]);
        }
    }
    if (cont == 0){
        printf("Nenhum numero igual a media");
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