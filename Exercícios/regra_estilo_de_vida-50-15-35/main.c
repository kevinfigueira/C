#include <stdio.h>
#include <stdlib.h>

int main()
{
    int salario;
    salario = 1500;
    int essenciais;
    int prioridade;
    int estiloDeVida;
    printf("Digite o valor gasto de Essenciais: ");
    scanf("%d", &essenciais);
    printf("Digite o valor gasto de Prioridade: ");
    scanf("%d", &prioridade);
    printf("Digite o valor gasto de Estilo de vide: ");
    scanf("%d", &estiloDeVida);
    essenciais = (essenciais * 100) / salario;
    prioridade = (prioridade * 100) / salario;
    estiloDeVida = (estiloDeVida * 100) / salario;
    if (essenciais <= 50) {
    printf("Gastos essenciais: dentro da regra\n");
} else {
    printf("Gastos essenciais: acima da regra\n");
}

if (prioridade <= 15) {
    printf("Prioridades financeiras: dentro da regra\n");
} else {
    printf("Prioridades financeiras: acima da regra\n");
}

if (estiloDeVida <= 35) {
    printf("Estilo de vida: dentro da regra");
} else {
    printf("Estilo de vida: acima da regra");
}
    return 0;
}
