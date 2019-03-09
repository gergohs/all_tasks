#include <stdio.h>
#include <stdlib.h>

int main()
{

    int i;
    int j;
    int n = 10;

    for (i = 1; i < n; i++)
    {
        for (j = 1; j < n; j++)
        {
            if (i == 1 || i == n-1 || j == 1 || j == n-1 || i == j )
            {
                printf("%d ", j);
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}
