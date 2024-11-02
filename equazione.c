#include <endian.h>
#include <stdio.h>
#include <math.h>


int main(){
    printf("RISOLUTORE EQUAZIONI DI SECONDO GRADO \n Forma Canonica : ax^2 + bx + c = 0 \n");
    double a=0,b=0,c=0 ;
    printf("inserire il coefficiente a :");
    scanf("%lf", &a);
    printf("\n Forma canonica : %lfx^2 + bx + c = 0 \n  inserire il coefficiente b:", a);
    scanf("%lf", &b);
    printf("\n Forma canonica : %lfx^2 + %lfx + c = 0 \n  inserire il coefficiente c:", a, b);
    scanf("%lf", &c);
    printf("\n Forma canonica : %lfx^2 + %lfx + %lf = 0 \n", a, b, c);

    double delta = (b*b) + (a * -4)* c;
    double root1, root2;
    

    if (a == 0){
        if (b == 0) {
            if (c == 0) {
                printf("CASO SPECIALE: L'equazione ha infinite radici, una per ogni numero reale.\n");
            } else {
                printf("CASO SPECIALE: L'equazione non e' mai verificata.\n");
            }    
            return 0; 
        } else {
            printf("CASO SPECIALE: L'equazione e' di primo grado\n");
            printf("RADICE: x = %lf, \n", b/-c);
        }
    }

    if (delta < 0) {
        printf("CASO SPECIALE: L'equazione non ha radici in R.\n");
    } else if (delta == 0) {
        printf("CASO SPECIALE: L'equazione ha una radice doppia in R.\n");
        root1 = -b / (2*a); 
        printf("RADICI: x1 = x2 = %lf\n", root1);

    } else {
        root1 = (-b +sqrt(delta)) / (2*a); 
        root2 = (-b -sqrt(delta)) / (2*a); 
        printf("RADICI: x1 = %lf, x2 = %lf\n", root1, root2);
    }

    printf("sus : %lf\n", delta);
    
    return 0;
}