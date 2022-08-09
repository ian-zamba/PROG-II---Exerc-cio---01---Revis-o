/*5. Fazer um programa que solicite 2 numeros e informe:
a. A soma dos numeros;
b. O produto do primeiro numero pelo quadrado do segundo;
c. O quadrado do primeiro numero;
d. A raiz quadrada da soma dos quadrados;
e. O seno da diferenca do primeiro numero pelo segundo;
f. O modulo do primeiro numero.
*/

#include <stdio.h>
#include <string.h>
#include <math.h>

int main(void) {
    
    float a, b;

    printf("Informe o primeiro numero: ");
    scanf("%f", &a);

    printf("Informe o segundo numero: ");
    scanf("%f", &b);

    printf("soma dos numeros: %.2f\n", a + b);
    printf("produto do primeiro numero pelo quadrado do segundo: %.2f\n", a * pow(b,2));
    printf("quadrado do primeiro numero: %.2f\n", pow(a,2));
    printf("raiz quadrada da soma dos quadrados: %.2f\n", sqrt(pow(a,2) + pow(b,2)));
    printf("seno da diferenca do primeiro numero pelo segundo: %.2f\n", sin(a-b));
    if(a >= 0){
        printf("modulo do primeiro numero: %.2f\n", a);
    }else{
        printf("modulo do primeiro numero: %.2f\n", a * -1);
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