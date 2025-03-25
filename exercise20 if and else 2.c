#include<stdio.h>
int main()
{
    float avarage;
    printf("write your avarage: ");
    scanf("%f",&avarage);
    if(avarage<3){
        printf("REPROVADO \n");
    }else
    if(avarage<5){
        printf("EXAME \n");
    } else {
    printf("APROVADO \n");
    }
    return 0;

    }
