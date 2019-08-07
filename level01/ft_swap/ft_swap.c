#include <stdio.h>

void	ft_swap(int *a, int *b)
{
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}

int main(void)
{
    int a = 5;
    int b = 10;
    ft_swap(&a, &b);
    printf("a = %d, b =  %d\n", a, b);
    return (0);
}

// gcc -W -Wall -Wextra -Werror ft_swap.c
// ./a.out