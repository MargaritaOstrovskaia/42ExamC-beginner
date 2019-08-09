#include <stdio.h>

int	ft_strlen(char *str);

int main(int argc, char **argv)
{
    int i;

    i = 0;
    if (argc == 2)
        i = ft_strlen(argv[1]);
    printf("%d\n", i);
    return (0);
}