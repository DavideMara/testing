#include <stdio.h>
int main()

{
    printf("\a ATTENZIONE: i lati devono essere positivi, \n ogni lato deve essere minore della somma degli altri due e \n ogni lato deve essere maggiore della differenza\n");
    double a=0,b=0,c=0 ;
    printf("inserire il lato A: ");
    scanf("%lf", &a);
    printf("inserire il lato b: ");
    scanf("%lf", &b);
    printf("inserire il lato c: ");
    scanf("%lf", &c);

    printf ("ecco i lati inseriti : %lf %lf %lf \n", a, b, c);

    if (a>0 && b>0 && c>0 && a+b > c && b+c > a && c+a>b ){
        printf("i dati rispettano le condizioni \n");
    }
    else {
        printf("i dati non rispettano le condizioni \n");
        return 0;
    }
    if ( a == b && b == c ){
        printf("il triangolo è equilatero ! ");
    }
    else if ( a == b || b == c || c == a){
        printf("il triangolo è isoscele \n");
    }
    else if ( a!=b && b!=c && c!=a ){
        printf("il triangolo è scaleno \n");
    }

    if ((a*a == b*b + c*c) 
            ||  (b*b == a*a + c*c) 
            ||  (c*c == a*a + b*b)){
        printf("il triangolo è rettangolo \n");
    }
    else  {
        printf("il triangolo non è rettangolo \n"); 
    }
return 0;
}