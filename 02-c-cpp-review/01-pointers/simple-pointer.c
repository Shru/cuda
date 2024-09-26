/* This code demostrates a simple pointer in C. 
*/

#include <stdio.h>

int main(){
    int x = 5; // x stores value 5
    int *ptr = &x; // ptr stores address of variable 'x'
    printf("Address of x: %p\n", ptr); 
    printf("Value of x: %d\n", *ptr); //Dereference a pointer to get value
}