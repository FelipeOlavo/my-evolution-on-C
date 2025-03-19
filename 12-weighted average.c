#include<stdio.h>
int main()
{
    float media, nota1,nota2,peso1,peso2;
    printf("Digite a nota 1: ");
    scanf("%f",&nota1);
    printf("Digite o peso da nota 1: ");
    scanf("%f",&peso1);
    printf("Digite a nota2: ");
    scanf("%f",&nota2);
    printf("Digite o peso da nota 2: ");
    scanf("%f",&peso2);
    media= ((nota1*peso1)+(nota2*peso2))/(peso1+peso2);
    printf("Media %f",media);
    return 0;

}
