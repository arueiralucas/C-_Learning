#include <stdio.h>
#include <math.h>
//Faça um Programa que peça o 
//raio de um círculo, calcule e mostre sua área.
int main (){
float pi =3.1415;
float raio,area;
    printf("Entre com o o raio do circulo : ");
    scanf("%f",&raio);
    area=pi* (pow(raio,2));
    printf("A area do circulo e :  %.2f \n : ",area);


return (0);
}