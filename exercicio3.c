// Escreva o seu código a seguir
#include <stdio.h>
#include <string.h>
int main() {    
    float n,n2,n3,n4,n5,n6,n7,res;
    printf("Quantos kg de ma��s deseja comprar?\n");
    scanf("%f",&n);
    printf("Qual o pre�o por kg de ma��s??\n");
    scanf("%f",&n2);
    printf("Quantos kg de bananas deseja comprar?\n");
    scanf("%f",&n3);
    printf("Qual o pre�o por kg de banana?\n");
    scanf("%f",&n4);
    printf("Quantos quilos de laranja deseja comprar?\n");
    scanf("%f",&n5);
    printf("Qual o pre�o por kg de laranja?\n");
    scanf("%f",&n6);
    printf("Qual o valor do desconto?\n");
    scanf("%f",&n7);
    res = (n*n2)+(n3*n4)+(n5*n6)-n7;
    printf("O pre�o total �:\n%.2f Euros",res);
    





return(0);
}
