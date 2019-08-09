#include <unistd.h>

char    *ft_strcpy(char *s1, char *s2);

int     main(int argc, char **argv)
{
    int i;
    char str[200];

    if (argc == 2)
        ft_strcpy(str, argv[1]);
    i = 0;
    while (str[i] != 0)
        write(1, &str[i++], 1);
    write(1, "\n", 1);
    return (0);
}