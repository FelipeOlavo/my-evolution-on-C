#include<stdio.h>
int main()
{
   float premio_total, premio1,premio2,premio3;
   printf("Digite o premio total que foi recebido: ");
   scanf("%f",&premio_total);
   premio1= premio_total*0.50;
   premio2= premio_total*0.30;
   premio3= premio_total - (premio1+premio2);
   printf("Aqui estão os valores divididos:");
   printf("Premio1: %f\n Premio2: %f\n Premio3: %f\n",premio1,premio2,premio3);
   return 0;

}
