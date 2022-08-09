/*Fazer um programa que pergunte um valor em graus Fahrenheit e imprime no
vıdeo o correspondente em graus Celsius usando as formulas que seguem.

a. Usar uma vari´avel double para ler o valor em Fahrenheit e a f´ormula:
C = (f − 32.0) ∗ (5.0/9.0).

b. Usar uma vari´avel int para ler o valor em Fahrenheit e a f´ormula:
C = (f − 32) ∗ (5/9).
*/

#include <stdio.h>
#include <string.h>
#include <math.h>

int main(void) {
    
    double fd;

    printf("Digite o valor em Fahrenheit: ");
    scanf("%lf", &fd);

    int fi = fd;

    double cd =  (fd - 32.0) * (5.0/9.0);
    int ci = (fi - 32.0) * (5.0/9.0);

    printf("Celsius double: %.2lf\n", cd);
    printf("Celsius Int: %d\n", ci);

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