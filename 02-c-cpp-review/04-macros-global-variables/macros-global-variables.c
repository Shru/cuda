/* This code demostrates macros, conditional macros, global variables in C. 
    #if
    #ifdef
    #ifndef
    #elif
    #else
    #endif
*/

#include <stdio.h>

#define PI 3.14159
#define AREA(r) (PI * r * r)

#ifndef radius 
#define radius 7
#endif

#if radius > 10
#define radius 10
#elif radius < 5
#define radius 5
#else 
#define radius 7
#endif

int main(){
    printf("Area of circle with radius %d: %f\n", radius, AREA(radius)); 
}