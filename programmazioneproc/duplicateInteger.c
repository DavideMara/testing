#include <stdio.h>

//void sort(int numbers[]);
void initialize(int* arr, int size)
{
    for (int i = 0; i < size; i++) {
        arr[i] = i + 1;
    }
}

// function to print an array
void printArray(int size)
{
    // variable length array
    int arr[size];
    initialize(arr, size);

    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
}

// driver code
int main()
{
    int n;
    printf("Enter the Size: ");
    scanf("%d", &n);
    printArray(n);
    printf("ciao");

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