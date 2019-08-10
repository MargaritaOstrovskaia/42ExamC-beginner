#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int    ft_strcmp(char *s1, char *s2);

int main (int argc, char **argv)
{
    if (argc == 3)
        printf("strcmp = %d, ft_strcmp = %d\n", strcmp(argv[1], argv[2]), ft_strcmp(argv[1], argv[2]));
    return (0);
}