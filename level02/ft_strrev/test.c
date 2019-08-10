#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char    *ft_strrev(char *str);

int main (int argc, char *argv[])
{
    int i;
    char data[255];

    if (argc == 2)
    {
        i = 0;
        while (argv[1][i])
        {
            data[i] = argv[1][i];
            i++;
        }
        data[i] = 0;
        printf("ft_strrev = %s\n", ft_strrev(data));
    }
    return (0);
}