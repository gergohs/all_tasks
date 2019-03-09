#include <stdio.h>
#include <stdlib.h>

// https://www.hackerrank.com/challenges/sock-merchant/

int array_sorter(int n, int *ar_count);
int sockMerchant(int n, int *ar_count);

int main()
{
    int socks = 9;
    int sock_colors[]= {10, 20, 20, 10, 10, 30, 50, 10, 20};
    int socks_size = sizeof(sock_colors)/sizeof(sock_colors[0]);
    int sorted_ar[100];
    int i, j, temp, pair_counter = 0;

    printf("Sorted array: \n");

    for (i = 0; i < socks_size; i++)
    {
        for (j = sock_colors[i+1]; j < socks_size; j++)
        {
            if (sock_colors[j] > sock_colors[i])
            {
                temp = sock_colors[i];
                sock_colors[i] = sock_colors[j];
                sock_colors[j] = temp;
            }
        }
    printf("%d\n", sock_colors[i]);
    }
  /*
    printf("Sorted array: \n");
    for ( i = 0; i < socks_size; i++)
    {
        printf("%d\n", sock_colors[i]);
    }
    */
//    printf("The number of pairs are: %d\n", sockMerchant(socks, sock_colors));
    return 0;
}
/*
int sockMerchant(int n, int *ar_count)
{
    for (i = 0; i <= n; i++)
    {
        for (j = i+1; j < n; j++)
        {
            if ( ar_count[i] == ar_count[j])
            {
                pair_counter++;
                break;
            }
        }
    }
    return pair_counter;
}
*/

int array_sorter(int n, int *ar_count)
{

}
