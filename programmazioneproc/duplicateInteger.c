#include <stdio.h>

//void sort(int numbers[]);

int main(){
    int i;
    int numbers[i]={};
    printf("Insert the number of the elements inside the array: ");
    scanf("%d", &i);
    printf("ecco i: %d\n", i);
    printf("\nNow insert the elements of the array");
    for (int x=0; x < i ; x++){
        printf("\ninsert the number: ");
        scanf("%d", &numbers[x]);
        printf("elemento inserito adesso lol: %d\n", numbers[x]);
    }
    return 0;
}

/* void sort(int numbers[]){
    size_t list_length = sizeof(numbers) / sizeof(numbers[0]);
    for (int i = 0; i < list_length; i++){
        if(numbers[i] == numbers[i-1]){
            printf("False\n");
            return 0;
        }    
    }
    printf("%d\n", list_length);

}
*/