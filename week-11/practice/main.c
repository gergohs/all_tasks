#include <stdio.h>
#include <stdlib.h>

   // Create a program which first asks for a number
    // this number indicates how many integers we want to store in an array
    // and than asks for numbers till the user fills the array
    // It should print out the biggest number in the given array and the memory address of it

int main()
{
    int elements;

    printf("How many numbers would you like to store in the array: ");
    scanf("%d", &elements);

    int user_numbers[elements];

    printf("Plese enter the numbers: ");

    for (int i = 0; i < elements; i++){
        scanf("%d", &user_numbers[i]);
    }

    printf("The elements of the array are: \n");
    for (int j = 0; j<elements; j++)
    {
        printf("%d \n", user_numbers[j]);
    }

}
