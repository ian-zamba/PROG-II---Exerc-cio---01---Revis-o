/*1. Fazer uma funcao que calcula a enesima potencia de uma variavel 
real x: f(x, n) = x^n.
*/

#include <stdio.h>
#include <string.h>
#include <math.h>

float potencia(float x, int n){
    
    float pot = 1;

    for (int i = 0; i < n; i++){
        pot *= x;
    }

    return pot;
}


int main(void) {
    
    float x;
    int n;

    printf("Informe o numero: ");
    scanf("%f", &x);

    printf("Informe a potencia: ");
    scanf("%d", &n);

    printf("%.2f", potencia(x,n));

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