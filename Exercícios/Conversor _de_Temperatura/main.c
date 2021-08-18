#include <stdio.h>
#include <stdlib.h>

int main()
{
    int temperatura;
    printf("Digite a temperatua em Fahrenheit: ");
    scanf("%d", &temperatura);
    int conversor;
    conversor = (5 * (temperatura - 32) / 9);
    printf("A temperatura em Celsius e de %d", conversor);
    return 0;
}
