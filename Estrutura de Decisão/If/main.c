#include <stdio.h>
#include <stdlib.h>

int main()
{
    int idade = 0;
    printf("Digite sua idade: ");
    scanf("%d", &idade);
    if (idade >= 18) {
        printf("Voce e maior de idade");
    } else {
        printf("Voce e menor de idade");
    }
    return 0;
}
