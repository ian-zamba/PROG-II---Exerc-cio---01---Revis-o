/*5. Escrever um programa que solicita as notas das duas provas feitas por 
cada um dos alunos de uma turma (as notas tem de estar no intervalo [0 10]) e 
imprime para cada um a media das notas. O programa deve parar imediatamente 
apos ter sido digitado o valor 50 para a nota da primeira prova.
*/

#include <stdio.h>
#include <string.h>
#include <math.h>

int main(void) {
    
    float n1, n2;
    int i = 1;

    printf("Informe a primeira nota do aluno %d: ", i);
    scanf("%f", &n1);

    while (n1 < 0 || n1 > 10 && n1 != 50){
        printf("Nota invalida, tente novamente: ");
        scanf("%f", &n1);
    }

    while (n1 != 50){

        printf("Informe a segunda nota do aluno %d: ", i);
        scanf("%f", &n2);

        while (n2 < 0 || n2 > 10){
            printf("Nota invalida, tente novamente: ");
            scanf("%f", &n2);
        }

        printf("A media do aluno %d e: %.2f\n", i, (n1 + n2) / 2);

        i++;
        printf("Informe a primeira nota do aluno %d: ", i);
        scanf("%f", &n1);

        while (n1 < 0 || n1 > 10 && n1 != 50){
            printf("Nota invalida, tente novamente: ");
            scanf("%f", &n1);
        }
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