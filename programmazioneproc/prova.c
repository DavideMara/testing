#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Inizializza la matrice di Vigenère
void initMatrix(char matrix[26][26]) {
    for (int i = 0; i < 26; i++) {
        for (int j = 0; j < 26; j++) {
            matrix[i][j] = 'a' + (i + j) % 26; // Usa il modulo per "riciclare" le lettere
        }
    }
}

int main() {
    char string[24], correctString[24] = {0}; // Inizializza a zero per sicurezza
    int max, a = 0;

    printf("Inserire il testo da elaborare: \n");
    fgets(string, sizeof(string), stdin);
    max = strlen(string);

    // Pulisci la stringa di input, conservando solo lettere minuscole
    for (int i = 0; i < max; i++) {
        if (isalpha(string[i])) { // Controlla se il carattere è una lettera
            correctString[a++] = tolower(string[i]); // Converte in minuscolo
        }
    }
    correctString[a] = '\0'; // Termina la stringa corretta con il carattere null


    // Inizializza la matrice di Vigenère
    char matrix[26][26];
    initMatrix(matrix);

    // Stampa la matrice di Vigenère
    printf("\nMatrice di Vigenère:\n");
    for (int row = 0; row < 26; row++) {
        for (int col = 0; col < 26; col++) {
            printf("%c ", matrix[row][col]);
        }
        printf("\n");
    }

    // Stampa la stringa pulita
    printf("\nStringa corretta:\n");
    for (int j = 0; j < a; j++) { // Usa a come lunghezza di correctString
        printf("%c", correctString[j]);
    }
    printf("\n");

    return 0;
}