/* This code demostrates a size_t data type in C. 
    size_t: unsigned int data type used to represent the size of objects in bytes.
    It is guaranteed to be big enough to contain the size of the biggest object the host system can handle.
    For a 64 bit compiler it would be unsigned long long int. 

    %zu --> size_t unsigned
    %lu --> unsigned long int
*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    int arr[] = {2, 3, 67, 84, 13, 104};

    size_t size = sizeof(arr) / sizeof(arr[0]);
    printf("Size of arr = %zu\n", size); // Output = 6

    printf("Size of size_t = %zu\n", sizeof(size_t)); // Output = 8 (bytes)
    printf("Size of int = %lu\n", sizeof(int)); // Output = 4 (bytes)

    return 0;

}