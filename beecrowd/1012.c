#include <stdio.h>
#define pi 3.14159
int main() {
double a,b,c,artrire,arcri,artrap,arquad,arret;
scanf("%lf%lf%lf",&a,&b,&c);
artrire = a*c/2;
arcri = pi*(c*c);
artrap = ((a+b)*c)/2;
arquad = b*b;
arret = a*b;
printf("TRIANGULO: %.3lf\n",artrire);
printf("CIRCULO: %.3lf\n",arcri);
printf("TRAPEZIO: %.3lf\n",artrap);
printf("QUADRADO: %.3lf\n",arquad);
printf("RETANGULO: %.3lf\n",arret);



    return 0;
}
