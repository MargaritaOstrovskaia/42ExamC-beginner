#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char    *ft_strdup(char *src)
{
    char *dest;
    int i;

    i = 0;
    while (src[i] != 0)
        i++;
    dest = (char*)malloc(sizeof(char) * (i + 1));
    i = 0;
    while (src[i] != 0)
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = 0;
    return (dest);
}

int main (int argc, char **argv)
{
    if (argc == 2)
        printf("strdup = %s, ft_strdup = %s\n", strdup(argv[1]), ft_strdup(argv[1]));
    return (0);
}

// gcc -W -Wall -Wextra -Werror ft_strdup.c
// ./a.out ""
// ./a.out "123v"
// ./a.out "-135h"