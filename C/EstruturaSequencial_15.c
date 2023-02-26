#include <stdio.h>
//Faça um Programa que pergunte quanto você ganha por hora e o número de horas trabalhadas no mês. 
//Calcule e mostre o total do seu salário no referido mês, sabendo-se que são descontados 11% para o 
//Imposto de Renda, 8% para o INSS e 5% para o sindicato, faça um programa que nos dê:
//salário bruto.
//quanto pagou ao INSS.
//quanto pagou ao sindicato.
//o salário líquido.
//calcule os descontos e o salário líquido, conforme a tabela abaixo:
//+ Salário Bruto : R$
//- IR (11%) : R$
//- INSS (8%) : R$
//- Sindicato ( 5%) : R$
//= Salário Liquido : R$
//Obs.: Salário Bruto - Descontos = Salário Líquido.
int main (){
    float salario_por_hora, horas_trabalhadas,total_salario_bruto,IR,INSS,SIND,total_salario_liquido;
    printf("Quanto voce ganha por hora : \n");
    scanf("%f",&salario_por_hora);
    printf("Numero de horas trabalhadas : \n");
    scanf("%f",&horas_trabalhadas);
    total_salario_bruto= salario_por_hora*horas_trabalhadas;
    //calculo dos impostos.
    IR = total_salario_bruto * 0.11;
    INSS = total_salario_bruto * 0.08;
    SIND = total_salario_bruto * 0.05;
    total_salario_liquido =(total_salario_bruto)-(IR+INSS+SIND);

    printf("Salario Bruto : R$ %.2f \n",total_salario_bruto);
    printf("IR (11%%) : R$ %.2f \n",IR );
    printf("INSS (8%%) : R$ %.2f \n",INSS);
    printf ("Sindicato ( 5%%) : R$ %.2f",SIND);
    printf("Salario Liquido : R$ %.2f", total_salario_liquido);

    return (0);


}