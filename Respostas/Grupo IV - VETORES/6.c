/*6. Fazer um programa que le valores para uma matriz do tipo ”float” de 5 
linhas por 3 colunas e imprime a diferenca entre a media dos elementos 
das colunas pares e a media dos elementos das linhas impares.*/

#include <stdio.h>
#include <string.h>
#include <math.h>

int main(void) {
    
    float mat[5][3];
    float somaim;
    float somapares;
    int conti = 0, contp = 0;

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Digite o valor do elemento da linha %d e coluna %d: ", i + 1, j + 1);
            scanf("%f", &mat[i][j]);
            if((j + 1) % 2 == 0){
                somapares += mat[i][j];
                contp++;
            }if((i + 1) % 2 != 0){
                somaim += mat[i][j];
                conti++;
            }
        }
    }

    printf("\n");


    printf("Diferenca entre a media dos elementos das colunas pares e a media dos elementos das linhas impares: %.2f", (somapares / contp) - (somaim / conti));

    printf("\n\n");

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