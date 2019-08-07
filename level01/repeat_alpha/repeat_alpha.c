#include <unistd.h>

int is_alpha(char c)
{
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
        return (1);
    return (0);
}

int get_count(char c)
{
    int i;

    i = 0;
    if (c >= 'a' && c <= 'z')
        i = c - 'a';
    else if (c >= 'A' && c <= 'Z')
        i = c - 'A';
    return (i + 1);
}

int main(int argc, char **argv)
{
    int i;
    int j;

    if (argc == 2)
    {
        i = 0;
        while (argv[1][i] != 0)
        {
            if (is_alpha(argv[1][i]))
            {
                j = 0;
                while (j < get_count(argv[1][i]))
                {
                    write(1, &argv[1][i], 1);
                    j++;
                }
            }
            else
                write(1, &argv[1][i], 1);
            i++;
        }
    }
    write(1, "\n", 1);
    return (0);
}

// gcc -W -Wall -Wextra -Werror repeat_alpha.c
// ./a.out "abc"
// ./a.out "Alex." | cat -e
// ./a.out 'abacadaba 42!' | cat -e
// ./a.out "" | cat -e
// ./a.out | cat -e
