#include <stdio.h>
#include <stdlib.h>

//0 é false e 1 é true
//o C ele não trabalha com true e false

int main()
{
    int numero = 0;
    printf("Digite um numero: ");
    scanf("%d", &numero);
    printf("%d e maior que 10? %d\n", numero, numero > 10);
    printf("%d e maior ou igual a 10? %d\n", numero, numero >= 10);
    printf("%d e manor ou igual 10? %d\n", numero, numero <= 10);
    printf("%d e igual a 10? %d\n", numero, numero == 10);
    printf("%d e diferente de 10? %d\n", numero, numero != 10);

    return 0;
}
