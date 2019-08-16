#include <stdio.h>

char    **ft_split(char *str);

void    print(char **words)
{
    int i;

    i = 0;
    while (words[i])
    {
        printf("%s\n", words[i]);
        i++;
    }
}

int     main(int argc, char **argv)
{
    char *str;
    char **res;

    if (argc == 2)
    {
        str = argv[1];
        res = ft_split(str);
        print(res);
    }
    return (0);
}