#include <stdio.h>
#include <stdlib.h>

int main()
{
    int prova1;
    printf("Digite a nota da prova1: ");
    scanf("%d", &prova1);
    int prova2;
    printf("Digite a nota da prova2: ");
    scanf("%d", &prova2);
    int prova3;
    printf("Digite a nota da prova3: ");
    scanf("%d", &prova3);
    int trabalhoFinal;
    printf("Digite a nota trabalho final: ");
    scanf("%d", &trabalhoFinal);
    int media;
    media = (prova1 + (prova2 * 2) + (prova3 * 3) + trabalhoFinal) / 7;
    if (media >= 9){
        printf("A");
    }
    if (media >= 7.5 && media < 9) {
        printf("B");
    }
    if (media >= 6 && media < 7.5) {
        printf("C");
    }
    if (media < 6) {
        printf("D");
    }
    return 0;
}
