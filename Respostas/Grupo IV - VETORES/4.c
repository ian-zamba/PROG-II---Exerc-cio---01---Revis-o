/*4. Fazer uma rotina que recebe um array do tipo double e o numero de 
valores que devem ser solicitados ao usuario e devolve o array preenchido 
com os valores digitados.
*/

#include <stdio.h>
#include <string.h>
#include <math.h>

int main(void) {
    
    int num;

    printf("Informe a quantidade de numeros a ser lido: ");
    scanf("%d", &num);

    double vet[num];

    for (int i = 0; i < num; i++){
      printf("Digite o %d valor: ", i + 1);
      scanf("%lf", &vet[i]);
    }

    printf("Valores:\n");
    for (int i = 0; i < num; i++){
      printf("%.2lf ", vet[i]);
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