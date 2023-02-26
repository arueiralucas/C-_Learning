#include <stdio.h>
//Faça um Programa que peça as 
//4 notas bimestrais e mostre a média.
int main(){
    float n1,n2,n3,n4,media;

    printf("Digite as 4 notas bimestrais em sequencia : \n");
    scanf("%f",&n1);
    scanf("%f",&n2);
    scanf("%f",&n3);
    scanf("%f",&n4);
    media = (n1+n2+n3+n4)/4;
    printf("A media nas notas sao : %f \n",media);

    return (0);

}