/* This code demostrates a user defined data type - struct in C. 
*/

#include <stdio.h>

typedef struct{
    float x;
    float y;   
    }Point;

int main(){

    Point p = {1.2, 3.5};
    printf("Size of Point = %zu\n", sizeof(Point)); // Output = 8 (4 bytes for 'x' & 4 bytes for 'y') 
    printf("Size of float = %lu\n", sizeof(float)); // Output = 4
}