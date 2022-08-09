/*3. Fazer uma rotina que recebe como parametro um array de 5 posicoes 
contendo as notas de um aluno ao longo do ano e devolve a media do aluno.
*/

#include <stdio.h>
#include <string.h>
#include <math.h>

float calculamedia(float notas[5]){

    float soma = 0;

    for (int i = 0; i < 5; i++) {
        soma += notas[i];
    }

    float media = soma / 5;

    return media;
}


int main(void) {
    
    float notas[5];

    for (int i = 0; i < 5; i++) {
        printf("informe a %d nota: ", i + 1);
        scanf("%f", &notas[i]);
    }

    printf("Media: %.2f", calculamedia(notas));

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