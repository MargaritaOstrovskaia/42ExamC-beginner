#include <stdio.h>
#include <stdlib.h>

int	ft_atoi_base(const char *str, int str_base);

int main(int argc, char **argv)
{
    int res;
    int base;

    if (argc == 3)
    {
        base = atoi(argv[2]);
        res = ft_atoi_base(argv[1] , base);
        printf("%d\n", res);
    }
    return (0);
}