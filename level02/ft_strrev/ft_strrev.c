#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char    *ft_strrev(char *str)
{
    int i;
    int len;
    char c;

    len = 0;
    while (str[len])
        len++;
    i = 0;
    while (i < len / 2)
    {
        c = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = c;
        i++;
    }
    return (str);
}

int main (int argc, char *argv[])
{
    argc = 2;
    char data[] = "123v";
    if (argc == 2)
        printf("ft_strrev = %s\n", ft_strrev(data));
    return (0);
}

// gcc -W -Wall -Wextra -Werror ft_strrev.c
// ./a.out ""
// ./a.out "123v"
// ./a.out "-135h"