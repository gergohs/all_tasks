#include <stdio.h>
#include <stdlib.h>

/* Vowels:
 * Create a function that can count the vowels in the text.txt.
 * text.txt example:
 * Lorem ipsum dolor sit etc.
 * In the same function write the vowels into another text file (just_some_vowels.txt).
 * just_some_vowels.txt example solution:
 * oeiuooi etc.
 * The function should return with a number of the vowels. (101) */

int main()
{

    FILE* fpointer;
    fpointer = fopen("file.txt", "r");
    char* buffer = (char*) malloc(200*sizeof(char));
    int char_counter = 0;
    char c;

    while (fpointer != NULL)
    {
        c = fgetc(fpointer);
        printf("%c\n", c);
    }
//    printf("%d", char_counter);

    return 0;
}
