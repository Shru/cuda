/* This code demostrates the formation of a 2D matrix using array pointer in C. 
*/

#include <stdio.h>

int main(){

    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {5, 6, 7, 8, 9};

    int *ptr1 = arr1;
    int *ptr2 = arr2;
    int *matrix[] = {ptr1, ptr2}; // Array of int pointers

    for(int i=0; i<2; i++){
        for(int j=0; j<5; j++){
            printf("%d ", *matrix[i]++);
        }
        printf("\n");
    }
}