#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i_finder = 0;
    int j_finder = 2;
    int i = 0;
    int j = 0;

    int matrix[2][2] =
    {
        (11, 2, 3),
        (4, 5, 6),
        (10, 8, 12)
    };


    for (i = 0; i < 10; i++)
    {
        if (i == i_finder && j == j_finder)
        {
            printf("Matrix element: %d \n", matrix[i][j]);
        }
        j++;
    }
//    printf("Matrix element: %d \n", matrix[1][1]);
    return 0;
}
