#include <stdio.h>
#include <stdlib.h>

char    *ft_itoa(int nbr);

int     main(int argc, char **argv)
{
    int i;
    int n;

    if (argc > 1)
    {
        i = 1;
        while (argv[i])
        {
            n = atoi(argv[i]);
            printf("n = %d, ft_itoa = %s\n", n, ft_itoa(n));
            i++;
        }
    }
    return (0);
}
