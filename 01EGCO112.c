//passing value using pointer

#include <stdio.h>

void math(int *x)
{
    *x *= *x;
}

int main()
{
    int x = 5;
    printf("Before math x = %d\n", x);
    math(&x);
    printf("After math x = %d", x);
}