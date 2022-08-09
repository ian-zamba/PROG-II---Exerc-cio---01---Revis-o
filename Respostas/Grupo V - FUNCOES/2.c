/*2. Fazer uma funcao que calcula o fatorial de um numero. Implementar uma 
versao recursiva e uma versao com laco. Obs.: caso nao tenha visto 
recursividade faca somentea versao com laco.
*/

#include <stdio.h>
#include <string.h>
#include <math.h>

int fatorial(int num){

    int fat = 1;

    for (int i = num; i >= 1; i--){
        fat *= i;
    }
    
    return fat;
}


int main(void) {
    
    int num;

    printf("Digite o numero: ");
    scanf("%d", &num);

    printf("Fatorial de %d: %d", num, fatorial(num));

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