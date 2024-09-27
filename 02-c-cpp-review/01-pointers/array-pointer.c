/* This code demostrates an array pointer in C. 
    Array elements are stored in a contiguous manner. 
*/

#include <stdio.h>

int main(){
    int arr[] = {10, 20, 30, 40, 50};
    int *ptr = arr; // ptr holds the address of first element of the array

    printf("Position one: %d\n", *ptr); // Output 10

    for (int i=0; i<5; i++){
        printf("%p ", ptr);
        printf("%d\n", *ptr);
        ptr++; // Pointer increaments by 4 bytes each time
    }

}