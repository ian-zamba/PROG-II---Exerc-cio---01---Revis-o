/*3. Fazer um programa que le o preco de um produto e inflaciona esse 
preco em 10% se ele for menor que 100 e em 20% se ele for maior ou igual a 100.
*/

#include <stdio.h>
#include <string.h>
#include <math.h>

int main(void) {
    
    float preco;

    printf("Informe o preco: ");
    scanf("%f", &preco);

    if(preco < 100){
        preco = preco + (preco * 0.10);
    }else{
        preco = preco + (preco * 0.2);
    }

    printf("Preco inflcionado: R$%.2f", preco);

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