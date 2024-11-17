#include <stdio.h>
#include <string.h>
#include <ctype.h>


int main (){
    char stringa[24];
    int i = 0, a = 0,j,max;
    printf("inserire il plaintext da elaborare: \n");
    fgets(stringa , sizeof (stringa), stdin);
    max=strlen(stringa);
    
    while(i < max){
        if(isalpha(stringa[i])){
            stringa[a] = stringa[i];
            ++a;
        }
        i++;
    }
    stringa[a-1] = '\0';
    
    
    for (j=0; j<max-1; j++ ){
        if (stringa[j] >='A' && stringa[j] <='Z'){
            stringa[j] = stringa[j] + 32;
        }
    }

    j = 0;
    while ( j < max){
        printf("%c", stringa[j++] );
    }  




    return 0;
}