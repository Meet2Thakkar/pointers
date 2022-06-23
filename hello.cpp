#include <stdio.h>

int main() {
    int a;
    int *p;
    a = 10; 
    p = &a; // &a is address of a.
    printf("%d\n",p); // prints address of a
    printf("%d\n",*p); // *p - value at address pointes by p
    printf("%d\n",&a);

    printf("a = %d\n",a);
    *p = 12; // Derefrencing
    printf("a = %d\n",a); 

    printf("address of P is %d\n",p);
    printf("value at p is %d\n",*p);

    int b = 20;
    *p = 20;
    printf("address of P is %d\n",p);
    printf("value at p is %d\n",*p);

    //int *p = &a; // p = &a; // &a is address of a.

    // POINTERS arithmetic
    printf("%d\n", p); // if p is 2002
    printf("size of integer is %d\n",sizeof(int));
    printf("%d\n",p+1); // then p+1 will be 2006

    printf("value at p is %d\n",*p);
    printf("value at p is %d\n",*(p+1));
}