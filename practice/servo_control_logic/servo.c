#include "servo.h"

/*
int random_generator()
{
    int rand_num;
    srand(time(NULL));
    rand_num = srand()%7;
    return rand_num;
}
*/

void direction_selector ()
{
    int rand_num;
    srand(time(NULL));
    rand_num = rand()%7;

    if (rand_num == 0)
    {
        printf("CENTER \n");
    }
    else if (rand_num== 1)
    {
        printf("QUARTER_LEFT \n");
    }
    else if (rand_num == 2)
    {
        printf("HALF_LEFT \n");
    }
    else if (rand_num == 3)
    {
        printf("FULL_LEFT");
    }
    else if (rand_num == 4)
    {
        printf("QUARTER_RIGHT \n");
    }
    else if (rand_num == 5)
    {
        printf("HALF_RIGHT \n");
    }
    else if (rand_num == 6)
    {
        printf("FULL_RIGHT \n");
    }
}

/*
switch (num)
{
case 1:
    break;
case 2:
    break;
case 3:
    break;
case 4:
    break;
case 5:
    break;
case 6:
    break;
case 7:
    break;
}
*/





