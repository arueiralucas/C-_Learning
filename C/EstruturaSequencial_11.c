#include <stdio.h>
#include <math.h>
//Faça um Programa que peça 2 números inteiros e um número real. Calcule e mostre:
//a - o produto do dobro do primeiro com metade do segundo .
//b - a soma do triplo do primeiro com o terceiro.
//c - o terceiro elevado ao cubo.
int main(){
    int n1,n2,n3,rn1,rn2,rn3;
    printf("Digite 2 numeros inteiros e 1 real : \n");
    scanf(" %i %i %i",&n1,&n2,&n3);

    rn1 = ((n1*2)*(n2/2));
    rn2 = ((n1*3)+(n3));
    rn3 = pow(n3,3);

    printf("a - o produto do dobro do primeiro com metade do segundo . : %i \n", rn1);
    printf("b - a soma do triplo do primeiro com o terceiro. : %i \n",rn2);
    printf("c - o terceiro elevado ao cubo. : %i \n", rn3);


    return (0);

}