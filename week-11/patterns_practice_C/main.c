#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    int j;
    int *counter;
    printf("How many rows would you like?\n");
    scanf("%d",&counter);

    for (i = 0; i <= counter; i++) {
        for (j = 0; j <= i; j++)
        {
            printf("%d ", j);
        }
        printf(" \n");
    }

}

