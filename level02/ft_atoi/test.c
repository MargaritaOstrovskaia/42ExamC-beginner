#include <stdio.h>
#include <stdlib.h>

int	ft_atoi(const char *str);

int main (int argc, char **argv)
{
    if (argc == 2)
        printf("atoi = %d, ft_atoi = %d\n", atoi(argv[1]), ft_atoi(argv[1]));
    return (0);
}