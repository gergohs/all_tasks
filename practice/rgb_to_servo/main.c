#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
    int rgb1 = 0;               //if rgb1 > 8000 --> rgb1_state = 1;
    int rgb2 = 1500;            //if rgb2 > 8000 --> rgb2_state = 1;
    int rgb3 = 25000;           //if rgb3 > 8000 --> rgb3_state = 1;
    int rgb4 = 9300;            //if rgb4 > 8000 --> rgb4_state = 1;
    int rgb5 = 0;               //if rgb5 > 8000 --> rgb5_state = 1;
    int rgb6 = 0;               //if rgb6 > 8000 --> rgb6_state = 1;
    int rgb7 = 0;               //if rgb7 > 8000 --> rgb7_state = 1;

*/
    int rgb1 = 0;               //   rgb1 * -1000
    int rgb2 = 0;               //   rgb2 * -100
    int rgb3 = 0;               //   rgb3 * -10
    int rgb4 = 20;              //   rgb4 * 0
    int rgb5 = 8300;            //   rgb5 * 10
    int rgb6 = 25000;           //   rgb6 * 100
    int rgb7 = 1400;            //   rgb7 * 1000

    float rgb_average = (rgb1*(-1000))+(rgb2*(-100))+(rgb3*(-10))+(rgb4)+(rgb5*10)+(rgb6*100)+(rgb7*1000);
    printf("rgb average: %.2f\n", rgb_average);

/*
    int rgb_left_3 = -3000;
    int rgb_left_2 = -2000;
    int rgb_left_1 = -1000;
    int rgb_center = 0;
    int rgb_right_1 = 1000;
    int rgb_right_2 = 2000;
    int rgb_right_3 = 3000;


    if (rgb_average < 1000 && rgb_average > -1000){

    }
*/
    return 0;
}
