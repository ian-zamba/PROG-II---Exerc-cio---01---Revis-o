/*4. Fazer um programa que le um valor, um operador (+, −, ∗, /) e outro valor 
e imprime o resultado da expressao:
< valor1 >< operador >< valor2 >
*/

#include <stdio.h>
#include <string.h>
#include <math.h>

float operacao(float v1, char op, float v2){
    
    float result;

    if(op == '+'){
        result = v1 + v2;
        return result;
    }

    if(op == '-'){
        result = v1 - v2;
        return result;
    }

    if(op == '/'){
        result = v1 / v2;
        return result;
    }

    if(op == '*'){
        result = v1 * v2;
        return result;
    }

}



int main(void) {
    
    float v1, v2;
    char op;

    printf("Informe o primeiro valor: ");
    scanf("%f", &v1);
    getchar();

    printf("Informe o operador: ");
    scanf("%c", &op);

    printf("Informe o segundo valor: ");
    scanf("%f", &v2);

    printf("%.2f", operacao(v1, op, v2));

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