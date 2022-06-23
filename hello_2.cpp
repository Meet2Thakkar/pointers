#include <stdio.h>

int main() {
    int a = 1025;
    int *p;
   p = &a;
    printf("address = %d, value = %d\n",p,*p);
    printf("address = %d, value = %d\n",p+1,*(p+1));
    char *p0;
    p0 = (char*)p; // Typecasting
    printf("size of character is %d\n",sizeof(char));
    printf("address = %d, value = %d\n",p0,*p0);
    printf("address = %d, value = %d\n",p0+1,*(p0+1));
    // 1025 = 00000000 00000000 00000100 00000001

    // Void Pointer - Generic Pointer
    void *p1;
    p1 = p;
    //printf("address of p1 %d, value of p1 %d\n",p1, *p1); // Error due to data type
    printf("address of p1 %d\n",p1);
    printf("address of p1+1 %d\n",p1+1);

}

/*
address = -807405036, value = 1025
address = -807405032, value = 26
size of character is 1
address = -807405036, value = 1
address = -807405035, value = 4
address of p1 -807405036
address of p1+1 -807405035
*/
