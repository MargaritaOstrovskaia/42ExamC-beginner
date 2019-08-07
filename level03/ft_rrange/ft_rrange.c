#include <stdio.h>
#include <stdlib.h>

int     *ft_rrange(int start, int end)
{
    int i;
    int temp;
    int size;
    int *nums;

    if (start > end)
    {
        temp = start;
        start = end;
        end = temp;
    }
    size = end - start + 1;
    nums = (int*)malloc(sizeof(int) * size);
    i = 0;
    while (i < size)
    {
        nums[i] = start + i;
        i++;
    }
    return (nums);
}

int main(void)
{
    int *arr;
    int a = 0;
    int b = -3;
    int count = 4;

    arr = ft_rrange(a , b);
    printf("ft_rrange\n");
    for(int i = 0; i < count; i++)
        printf(" %d ", arr[i]);
    return (0);
}

// gcc -W -Wall -Wextra -Werror ft_rrange.c
// ./a.out

