#include <stdio.h>
#include <stdlib.h>
// - Create an array variable named `aj`
//   with the following content: `[3, 4, 5, 6, 7]`
// - Reverse the order of the elements in `aj`
// - Print the elements of the reversed `aj`
int reverseArr (int name[]);

int main()
{

    int aj[] = {3,4,5,6,7};

    for (int i=0; i<5; i++)
    {
        printf("Original array: %d, \n", aj[i]);
    }

    reverseArr(aj);
}

int reverseArr (int name[])
{
    int temp;
    for (int i=0; i<5/2; i++)
    {
        temp = name[i];
        name[i] = name(5-i-1);
        name(5-i-1) = temp;
    }

    return printf("Reversed array: %d, ", temp);
}


