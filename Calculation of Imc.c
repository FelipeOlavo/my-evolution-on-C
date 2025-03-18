/*programa para calcular o imc*/
#include<stdio.h>
int main(){
float imc , peso, altura;
printf("Digite o seu peso: ");
scanf("%f",&peso);
printf("Digite a sua altura: ");
scanf("%f",&altura);
imc= peso/(altura*altura);
printf("imc %f",imc);
return 0;

}
