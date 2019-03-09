#include <stdio.h>
#include <stdlib.h>
// Write a function that takes a filename as string,
// then returns the number of lines the file contains.
// It should return zero if it can't open the file

int lineCounter (char* filename);

int main()
{
 /*   FILE * fPointer;
    fPointer = fopen("file2.txt", "w");
    char*filename = fPointer;

    fprintf(fPointer, "Oh, I think I've landed\nIn a world I hadn't seen\nWhen I'm feeling ordinary\nWhen I don't know what I mean");
    fclose(fPointer);
*/

    int lineCount = 0;
    FILE * fPointer = fopen("file2.txt", "r");
    char fileName = fPointer;

    if (fileName == "\n")
    {
        lineCount++;
    }

    //lineCounter(filename);
}
/*
int lineCounter (char* filename)
{

    return printf("%d", lineCount);
}
*/
