#include <stdio.h>

int		max(int* tab, unsigned int len)
{
    int i;
    int res;

    res = tab[0];
    i = 1;
    if (i < len)
    {
        if (tab[i] > tab[i - 1])
            res = tab[i];
    }
    return (res);
}

int main (void)
{
    int arr1[5] = {-7, 4 , 0, 8, 1};
    int arr2[5] = {-7, -1 , -27, -3, -40};

    printf("max = %d\n", max (&arr1, 5));
    printf("max = %d\n", max (&arr2, 5));
    return (0);
}

// gcc -W -Wall -Wextra -Werror max.c
// ./a.out
