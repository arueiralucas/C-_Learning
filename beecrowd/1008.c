#include <stdio.h>
 
int main() {
int numb_f,horas;
float salario,salario_t;
scanf("%d%d%f",&numb_f,&horas,&salario);
salario_t = salario*horas;
printf("NUMBER = %d\nSALARY = U$ %.2f\n",numb_f,salario_t);
 
    return 0;
}
