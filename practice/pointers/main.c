#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("\n*********************pointers*************************\n\n");
    int a = 10;
    int *a_pointer = &a;
    int dereferenced = *a_pointer;

    printf("Int 'a' value: %d\t\n", a);
    printf("Int 'a' address (&a): %d\t\n", &a);
    printf("Int 'a' address with pointer (a_pointer wit percent d): %d\t\n", a_pointer);
    printf("Int 'a' address with pointer (a_pointer with percent u): %u\t\n", a_pointer);
    printf("Int 'a' value with dereferenced pointer: %d\t\n", dereferenced);
//    ********************************************************************************
    printf("\n*************************array pointers*********************\n\n");
//    ********************************************************************************

    int num_array[] = {2, 4, 6, 8};
    int *arr_pointer = &num_array[0];
    printf("num_Array[] address: %d\n", num_array);
    printf("num_Array[] address with arr_pointer: %d\n", arr_pointer);
    printf("num_Array[] first element with pointer deref.: %d\n", *arr_pointer);

    return 0;
}
