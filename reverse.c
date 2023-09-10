#include <stdio.h>

void reverse(int array[], int length);

int i; 

int main(void){
    int array[] = {1,2,3,4,5,6,7,8,9};
    int temp = 0;
    int size = sizeof(array) / sizeof(array[0]);

    reverse(array, size);

    for (i = 0; i < 9; i++){
        printf("%d\n", array[i]);
    }

    printf("\n\n");
}

void reverse(int array[], int size){
    int temp = 0;

    for (i = 0; i < (size / 2); i++){
        temp = array[i];
        array[i] = array[size - i - 1];
        array[size - i - 1] = temp;
    }
}

