/* This code demostrates a chain of pointers in C.
    ptr3 --> ptr2 --> ptr1 --> value
    ptr3 holds the address of ptr2.
    ptr2 holds the address of ptr1.
    ptr1 holds the addess of variable named value.
*/

#include <stdio.h>

int main(){
    int value = 50;
    int *ptr1 = &value;
    int **ptr2 = &ptr1;
    int ***ptr3 = &ptr2;

    printf("Value = %d\n", ***ptr3);
}