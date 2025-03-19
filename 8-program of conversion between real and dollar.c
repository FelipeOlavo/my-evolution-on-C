#include<stdio.h>
int main(){
float  cotacao,usd,brl;
printf("Qual e cotacao do dollar atualmente? ");
scanf("%f",&cotacao);
printf("Digite um valor em real, para que ele seja convertido em dollar: ");
scanf("%f",&brl);
usd= brl/cotacao;
printf("Conversao do real para o dollar %f", usd);
return 0;

}
