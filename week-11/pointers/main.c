#include <stdio.h>
#include <stdlib.h>

int sum (int x, int y);
int sum_function(int *add_first, int *add_second);

int main()
{

    int numbers = 55;
    int *num_ptr;
    num_ptr = numbers;

    printf("The number value is: %d\n", numbers);
    printf("The number address is: %d\n", &numbers);
    printf("The pointer value is: %d\n", num_ptr);
    printf("The pointer address is: %d\n", &num_ptr);



    int b = 100;
    int c = 200;
    int *b_pointer;
    int *c_pointer;
    b_pointer = &b;
    c_pointer = &c;

    int d;
    d = sum(b,c);

    printf("The sum is: %d\n", d);

    printf("\n*************************changing values*************************\n");

    float temperature = 21.3;
    printf("Temperature is: %.2f \n", temperature);

    float *p_temp;
    p_temp = &temperature;
   // printf("Temperature with pointer is: %.2f \n", p_temp);

    *p_temp = 28.6;
    printf("New temperature is: %.2f \n", temperature);

    printf("\n*************************changing values*************************\n");


    printf("\n*************************Adding*************************\n");

    int add_a = 10;
    int add_b = 20;
    int *pointer_a;
    int *pointer_b;
    pointer_a = add_a;
    pointer_b = add_b;

    int adding;
    adding = sum_function(&add_a, &add_b);

    printf("Sum is: %d \n", adding);

    printf("\n*************************Adding*************************\n");

    return 0;
}

int sum_function(int *add_first, int *add_second){
    int result;
    result = *add_first + *add_second;
    return result;
}

int sum (int x, int y)
{
    int sum = x+y;
    return sum;
}

