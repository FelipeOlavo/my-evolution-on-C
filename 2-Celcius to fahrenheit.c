/*programa para converter fahrenheit-celcius*/
#include<stdio.h>
int main(){
float fahrenheit,celcius;
printf("digite o valor em celcius que será convertido em fahrenheit: ");
scanf("%f",&celcius);
fahrenheit = (celcius *1.8)+32;
printf("fahrenheit %f", fahrenheit);
return 0;

}
