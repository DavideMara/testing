#include <math.h>
#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
int main()
{
    float a, b, sum, diff, prod, radice, potenza;  // radice di b e potenza di a 
    printf("inserire a :");
    scanf("%f", &a);
    printf("inserire b :");
    scanf("%f", &b);
    sum = a + b;
    diff = a - b;
    prod = a * b;
    radice = sqrt(b);
    potenza = pow(a, 2);
    printf("somma: %f \n", sum);
    printf("differenza: %f \n", diff);
    printf("prodotto: %f \n", prod);
    printf("radice di b: %f \n", radice);
    printf("potenza di a : %f \n", potenza);

    return 0; 
}
