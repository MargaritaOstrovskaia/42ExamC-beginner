#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int    ft_strcmp(char *s1, char *s2)
{
    int i;

    i = 0;
    while (s1[i] != 0 && (s2[i] == s1[i]))
        i++;

    return (s1[i] - s2[i]);
}

int main (int argc, char **argv)
{
    if (argc == 3)
        printf("strcmp = %d, ft_strcmp = %d\n", strcmp(argv[1], argv[2]), ft_strcmp(argv[1], argv[2]));
    return (0);
}

// gcc -W -Wall -Wextra -Werror ft_strcmp.c
// ./a.out "" ""
// ./a.out "123v" " 123v"
// ./a.out "135" "1356"