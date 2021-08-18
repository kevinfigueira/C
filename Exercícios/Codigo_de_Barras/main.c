#include <stdio.h>
#include <stdlib.h>

int main()
{
    int codigoDeBarras = 0;
    printf("Digite o codigo de barra: ");
    scanf("%d", &codigoDeBarras);
    switch (codigoDeBarras) {
    case 1:
        printf("Leite Integral - 3,80");
        break;
    case 2:
        printf("Manteiga - 5,98");
        break;
    case 3:
        printf("Cafe 500g - 8,25");
        break;
    default:
        printf("Produto nao cadastrado");
        break;

    }

    return 0;
}
