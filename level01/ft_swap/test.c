#include <stdio.h>
#include <stdlib.h>

void	ft_swap(int *a, int *b);

int     main(int argc, char **argv)
{
    int a;
    int b;

    if (argc == 3)
    {
        a = atoi(argv[1]);
        b = atoi(argv[2]);
        printf("1: a = %d, b =  %d\n", a, b);

        ft_swap(&a, &b);
        printf("2: a = %d, b =  %d\n", a, b);
    }
    return (0);
}