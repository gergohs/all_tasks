#include <stdio.h>
#include <stdlib.h>

int array_fill(int *num);

int main()
{
    int *num;
    array_fill(&num);

    for (int i = 0; i < sizeof(num)/sizeof(num[0]); i++)
    {
        printf("%d\n", num[i]);
    }
}

int array_fill(int *num)
{
    num = (int*)malloc(10*sizeof(int));

    for (int i = 0; i < sizeof(num)/sizeof(num[0]); i++)
    {
        &num[i] = i;
    }
    return *num;
}

