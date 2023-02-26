#include <stdio.h>
//João Papo-de-Pescador, homem de bem, comprou um microcomputador para controlar o rendimento diário de seu trabalho.
// Toda vez que ele traz um peso de peixes maior que o estabelecido pelo regulamento de pesca do estado de São Paulo
// (50 quilos) deve pagar uma multa de R$ 4,00 por quilo excedente. João precisa que você faça um programa que leia a variável peso
// (peso de peixes) e calcule o excesso. Gravar na variável excesso a quantidade de quilos além do limite e na variável multa o valor
// da multa que João deverá pagar. Imprima os dados do programa com as mensagens adequadas.
int main(){
    float peso_peixe,peso_peixe_autorizado,multa, peso_exedido;
    peso_peixe_autorizado = 50.00;
    printf ("Digite a quandidade de peso de peixe :  \n");
    scanf("%f",&peso_peixe);
    if(peso_peixe > peso_peixe_autorizado){
        printf("O peso pescado foi de : %.2f \n", peso_peixe);
        peso_exedido = (peso_peixe - peso_peixe_autorizado);
        multa = (( peso_peixe - peso_peixe_autorizado)*4);
        printf("A quantidade de peso exedido foi de : %.2f A multa e de : %.2f ",peso_exedido,multa);
    }
    else if(peso_peixe <= peso_peixe_autorizado){
        printf("O peso pescado foi de : %.2f \n", peso_peixe);
        printf("Sem multas dentro do limite de 50Kg");
    }
    return (0);

}