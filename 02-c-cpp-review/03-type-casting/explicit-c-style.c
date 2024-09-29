/* This code demostrates a explicit casting in C. 
*/

#include <stdio.h>

int main(){
    float f = 33.67;
    
    int i = (int)f;
    printf("%d\n", i); // Output = 33 (Rounded down since decimal is truncated)

    char c = (char)i;
    printf("%c\n", c); // Output = ! (ASCII value of 32 is !)
}