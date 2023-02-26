#include <stdio.h>
//Faça um Programa que calcule a área de um quadrado, 
//em seguida mostre o dobro desta área para o usuário.
int main(){
float area,lado,db_area;
    printf("Digite o lado do quadrado : \n");
    scanf("%f", &lado);
    area = lado*lado;
    db_area = (area*2);
    printf("A area do quadrado e  : %f \n ",area);
    printf("O dobro da area e : %f \n,",db_area);


    return (0);
}