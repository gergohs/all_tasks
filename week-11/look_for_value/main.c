#include <stdio.h>
#include <stdlib.h>
// Create a function which takes an array (and it's lenght) and a number as a parameter
// the function should return index where it found the given value
// if it can't find the number return 0

int value_finder (int my_array[], int size, int given_num);

int main()
{
    int my_array[] = {2, 11, 77, 15, 4, 7, 6, 8, 3, 23, 45, 9, 17};
    int size = sizeof(my_array)/sizeof(my_array[0]);
    int given_num = 15;

//    printf("Please give me a number: ");
//    scanf("\n %d \n", given_num);

    value_finder(my_array, size, given_num);
}

int value_finder (int *array, int size, int num)
{
    int temp;
    int i;

    for (i = 0; i <= size; i++)
    {
        if (array[i] == num)
        {
            temp = i;
            break;
        }
        else
        {
          temp = 0;
        }
    }
    return printf("The index is: %d\n", temp);
}

