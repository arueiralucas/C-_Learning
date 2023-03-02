#include <stdio.h>
//Faça um programa que peça o tamanho de um arquivo para download (em MB) e a 
//velocidade de um link de Internet (em Mbps), calcule e informe o tempo aproximado de download do arquivo usando este link (em minutos).

int main () {
 float kb, mb;
  printf("Digite o tamanho do arquivo em MB : \n");
  scanf( "%f", &kb);
  //1min = 60 seg 60Mbps
  mb=kb/60;
  printf("O tempo de download deste aquivo é de %.2f minutos.",mb);
  return (0);
}
