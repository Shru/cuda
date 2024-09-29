/* This code demostrates struct in C++. 
*/

#include <iostream>
using namespace std;

typedef struct {
    float x;
    float y;
}Point;

int main(){

    Point p = {1.2, 3.5};
    printf("Size of Point = %zu\n", sizeof(Point)); // Output = 8 (4 bytes for 'x' & 4 bytes for 'y')
}