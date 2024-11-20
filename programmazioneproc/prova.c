
#include <stdio.h>
#include <string.h>
#include <ctype.h>

void initMatrix (char *matrix[26][26]){
    int i, j, q = 'a';
    for (i= 0 ; i<26; i++){
        for (j=0; j<26;  j++){
            matrix[i][j] = q + j;
        }
    }    
}

int main (){
    char string[24], correctString[24];
    int max, maxCorretta, a=0, j;
    printf("inserire il plaintext da elaborare: \n");
    fgets(string , sizeof (string), stdin);
    int max=strlen(string);
    maxCorretta=strlen(correctString);
    for (int i=0; i<max-1; i++){
        if(string[i] >='A' && string[i] <='Z'){
            string[i]= string[i] + 32;
        }
        if (string[i]>='a'&& string[i]<='z'){
            correctString[a]= string[i];
            a++;
        }
    }
    char matrix[26][26];
    initMatrix(*matrix);
    int row, column=0;
    
    for (row=0; row<26; row++)
     {
        for(column=0; column<26; column++)
            {printf("%d     ", matrix[row][column]);}
            printf("\n");
     }
    

    for ( j=0;  j< maxCorretta-1; j++){
        printf("%c \n", correctString[j] );
    }  
  
    return 0;
} 