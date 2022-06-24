//Pointer as function argument 
#include <stdio.h>

void increment (int *p) {
    *p += 1;
    //printf("a = %d\n", a);
    //printf("address %d\n",);
}

int main() {
    int a = 18;
    increment(&a);
    printf("a = %d\n", a);
    printf("address of main %d\n",&a);
}  
/*
a = 19
address of main 1449129756
*/
