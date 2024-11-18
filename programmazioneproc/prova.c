#include <stdio.h>
#include <string.h>
#include <ctype.h>


int main (){
    char stringa[24];
    int i = 0, a = 0,j=0,max;
    printf("inserire il plaintext da elaborare: \n");
    fgets(stringa , sizeof (stringa), stdin);
    max=strlen(stringa);
    
    while(i < max-1){
        if(stringa[i] >='A' || stringa[i] >= 'Z'){
            stringa[i] = stringa[i] + 32;
        }
        if(stringa[i] >= 'a' || stringa[i] <= 'z' )
        
        i++;
    }
  
   /*while(i < max){
        if(isalpha(stringa[i])){
            stringa[a] = stringa[i];
            ++a;
        }
        i++;
    }
    
    stringa[a-1] = '\0';
    
    
    for (j=0; j<max-1; j++ ){
        if (stringa[j] >='A' & stringa[j] <='Z'){
            stringa[j] = stringa[j] + 32;
         }
    }
    */
    while ( j < max){
        printf("%c", stringa[j++] );
    }  




    return 0;
}