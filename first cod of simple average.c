/*Programa para calcular a media simples de duas notas*/
#include<stdio.h>
int main(){
    float nota1, nota2, media;
    /*float=números reais*/
    printf("digite nota1: ");
    scanf("%f",&nota1);
    printf("digite nota2: ");
    scanf("%f",&nota2);
    media= (nota1+nota2) / 2;
    printf("media: %f\n", media);
    printf("Notas: %f %f", nota1, nota2);

    return 0;
    }
