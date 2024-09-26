/* This code demostrates a void pointer in C. 
    Void pointer can point to any type of data. 
    Here, it points to an integer and then to a floating point number. 
    Void pointers cannot be dereferenced. Hence cast them before dereferencing. 
*/

#include <stdio.h>

int main(){
    int num = 10;
    float fnum = 10.892;
    void *vptr; // void pointer decleration

    vptr = &num; // vptr points to num which is an integer
    printf("Integer: %d\n", *(int*)vptr); // cast vptr as int pointer. Then dereference the cast pointer to get value.

    vptr = &fnum;
    printf("Float: %.3f\n", *(float*)vptr);
}