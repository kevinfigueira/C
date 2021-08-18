#include <stdio.h>
#include <stdlib.h>

int main()
{
    float salario;
    printf("Digite seu salario: ");
    scanf("%f", &salario);
    float alimentacao;
    printf("Digite o valor da alimentacao: ");
    scanf("%f", &alimentacao);
    float moradia;
    printf("Digite o valor da moradia: ");
    scanf("%f", &moradia);
    float saude;
    printf("Digite o valor da saude: ");
    scanf("%f", &saude);
    float outros;
    printf("Digite o valot total do restante: ");
    scanf("%f", &outros);
    alimentacao = (alimentacao * 100) / salario;
    moradia = (moradia * 100) / salario;
    saude = (saude * 100) / salario;
    outros = (outros * 100) / salario;
    printf("Alimentacao %.0f%\n", alimentacao);
    printf("Moradia %.0f%\n", moradia);
    printf("Saude %0.f%\n", saude);
    printf("Outros %.0f%\n", outros);

    return 0;
}
