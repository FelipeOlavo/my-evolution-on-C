#include<stdio.h>
int main ()
{
    float SI, Au, Aur,SF;
    printf("Salario inicial: ");
    scanf("%f",&SI);
    printf("Digite a porcentagem do aumento: ");
    scanf("%f",&Au);
    Aur= (100+Au)/100;
    SF= SI*Aur;
    printf("Valor Final: %f", SF);
    return 0;

}
