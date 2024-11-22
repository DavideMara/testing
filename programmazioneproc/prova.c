#include <stdio.h>
#include <string.h>
#include <ctype.h>


void initMatrix(char matrix[26][26]) {
    for (int i = 0; i < 26; i++) {
        for (int j = 0; j < 26; j++) {
            matrix[i][j] = 'a' + (i + j) % 26;
        }
    }
}


void vigenereCipher(const char *text, const char *key, char *output, char matrix[26][26]) {
    int textLen = strlen(text);
    int keyLen = strlen(key);
    int keyIndex = 0;

    for (int i = 0; i < textLen; i++) {
        if (isalpha(text[i])) {
            int textChar = tolower(text[i]) -   'a';
            int keyChar = tolower(key[keyIndex % keyLen]) - 'a';
            output[i] = matrix[textChar][keyChar]; 
            keyIndex++;
        } 
    }
    output[textLen] = '\0'; 
}

int main() {
    char string[24], correctString[24] = {0}; 
    char key[8], encrypted[100]; 
    int max, a = 0;

    printf("Inserire il testo da cifrare: \n");
    fgets(string, sizeof(string), stdin);
    max = strlen(string);

    
    for (int i = 0; i < max; i++) {
        if (isalpha(string[i])) { 
            correctString[a++] = tolower(string[i]); 
        }
    }
    correctString[a] = '\0';

    printf("Inserire la chiave: \n");
    fgets(key, sizeof(key), stdin);
    key[strcspn(key, "\n")] = '\0'; 

    char matrix[26][26];
    initMatrix(matrix);

   
    vigenereCipher(correctString, key, encrypted, matrix);

    printf("\nTesto originale pulito: %s\n", correctString);
    printf("Chiave: %s\n", key);
    printf("Testo cifrato: %s\n", encrypted);

    return 0;
}