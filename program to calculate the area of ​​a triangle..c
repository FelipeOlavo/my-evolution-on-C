/*programa para calcular a area de um triangulo*/
#include<stdio.h>
int main(){
float area, base, altura;
printf("Digite o valor da base em metros: ");
scanf("%f",&base);
/* & ''endereço'' serve para mostrar em qual local sera armazenada*/
printf("Digite o valor da altura em metros: ");
scanf("%f",&altura);
area= (base * altura)/2;
printf("area %f", area);
return 0;

}
