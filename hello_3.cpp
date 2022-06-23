#include <stdio.h>

int main() {
    int a = 5;
    int *p = &a;
    *p = 6;
    int **q = &p;
    int ***r = &q;
    printf("value of a = %d\n", a);
    printf("value of *p = %d\n", *p);
    printf("value of *q = %d\n", *q);
    printf("value of **q = %d\n", **q);
    printf("value of *r = %d\n", *r);
    printf("value of **r = %d\n", **r);
    printf("value of ***r = %d\n", ***r);
    ***r = 10;
    printf("a = %d\n",a);
    **q = *p + 2;
    printf("a = %d\n",a);
}

/*
value of a = 6
value of *p = 6
value of *q = -729810156
value of **q = 6
value of *r = -729810168
value of **r = -729810156
value of ***r = 6
a = 10
a = 12
*/