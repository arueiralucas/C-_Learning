#include <stdio.h>
int main() {
 double pi;
 double raio;
 double volume;
 scanf("%lf",&raio);
 pi = 3.14159;
 volume = (4.0/3.0)*pi*(raio*raio*raio);
 printf("VOLUME = %.3f\n",volume);
 
    return 0;
}
