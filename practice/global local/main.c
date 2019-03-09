#include <stdio.h>
#include <stdlib.h>

    const int a = 50;

int main()
{
    print_a(&a);
    printf("1st func: %d\n", a);
    print_a_mult(&a);
    printf("2nd func: %d\n", a);
    return 0;
}

int print_a (int *a)
{
    *a = 0;
    *a =+ 10;
    return a;
}

int print_a_mult (int *a)
{
    *a = 0;
    *a =+ 20;
    return a;
}

