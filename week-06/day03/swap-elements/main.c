#include <stdio.h>
#include <stdlib.h>
// - Create an array variable named `abc`
//   with the following content: `["first", "second", "third"]`
// - Swap the first and the third element of `abc` by using a function
// - That function should take an array as a parameter and return the correct array

//void swap (char arr);

int main()
{
    int num = {1,2,3};
    int* pNum = &num;
    for (int i=0; i<3; i++)
    {
        printf("%d, ", num[i]);
    }
}
/*    char abc[3][8];

    strcpy(abc[0], "first");
    strcpy(abc[1], "second");
    strcpy(abc[2], "third");

    printf("%s, %s, %s %\n", &abc);
*/


//    swap(abc);

/*
void swap (char arr)
{
    for (int i =0; i < 3; i++)
    {
        char temp[1];
        temp[] = arr[0];
        arr[0] = arr[n-1];
        arr [n-1] = temp;
        printf("%d", arr);
    }
}*/
