#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    char *species;
    char *sex;
    int *age;
} animal;

int main()
{
    animal deer;
    deer.species = "red deer";                  //at the end, there is an \0, null-terminating char
    deer.sex = "buck";
    deer.age = 8;

    printf ("%c\n", deer.species[0]);           //print the first char of species
    printf("Species: %s\nSex: %s\nAge: %d\n", deer.species, deer.sex, deer.age);

    return 0;
}
