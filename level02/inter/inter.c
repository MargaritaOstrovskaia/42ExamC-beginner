#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int is_doubles(char *s, int pos)
{
    int i;

    i = 0;
    while (i < pos)
    {
        if (s[pos] == s[i])
            return (1);
        i++;
    }
    return (0);
}

int main (int argc, char *argv[])
{
    int i;
    int j;

    if (argc == 3)
    {
        i = 0;
        while (argv[1][i] != 0)
        {
            j = 0;
            while (argv[2][j] != 0)
            {
                if (argv[1][i] == argv[2][j])
                    if (!is_doubles(argv[1], i)){
                        write(1, &argv[1][i], 1);
                        break ;
                    }
                j++;
            }
            i++;
        }
    }
    write(1, "\n", 1);
    return (0);
}