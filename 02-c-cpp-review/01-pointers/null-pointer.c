/* This code demostrates a null pointer in C. 
    Dereferencing uninitialized pointers can have unintended effects. 
    So, initialize pointers to NULL when they don't have a valid data to point to yet. 
    Check the pointers for NULL before using to avoid crashes. Dereferencing a NULL pointer causes the program to crash.
    NULL checks allow graceful handling of failed memory allcoations or uninitialized pointers
*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    int *ptr; //  Uninitialized pointer
    printf("Uninitialized pointer address, int, char, float: %p, %d, %c, %f\n", ptr, *(int*)ptr, *(char*)ptr, *(float*)ptr); // Consequence of uninitialized pointer

    int *nptr = NULL; // Pointer initialized to NULL
    printf("Initial pointer value: %p\n", (void*)nptr); // NULL
    //printf("Dereferencing NULL pointer: %d\n", *nptr);  // Crash

    if (nptr == NULL){
        printf("Pointer is NULL, cannot dereference \n");
    }

    // Memory allocation:
    nptr = malloc(sizeof(int));
    if (nptr == NULL){
        printf("Memory allocation failed. \n");
        return 1; // Exit program with an error code
    }

    printf("After allocation, pointer value: %p\n", (void*)nptr); // Memory is allocated and address is returned. Print that address

    // Safe to use nptr
    *nptr = 30;
    printf("Value at nptr: %d\n", *nptr);

    // Clean up
    free(nptr); // Since memory was allocated on heap through malloc, its necessary to free up after use. 
    nptr = NULL; // Set pointer to NULL after freeing. 

    if (nptr == NULL){
        printf("nptr is NULL, safely avoided use after freeing\n");
    }

    return 0;
}