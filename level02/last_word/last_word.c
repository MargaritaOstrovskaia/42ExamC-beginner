#include <unistd.h>

int is_del(char c)
{
    if ((c >= 9 && c <= 13) || c == ' ')
        return (1);
    return (0);
}

int main (int argc, char **argv)
{
    int i;

    if (argc == 2)
    {
        i = 0;
        while (argv[1][i] != 0)
            i++;
        while (--i >= 0)
        {
            if (!is_del(argv[1][i]) && (i == 0 || is_del(argv[1][i - 1])))
                break;
        }
        while (argv[1][i] != 0 && !is_del(argv[1][i]))
            write(1, &argv[1][i++], 1);
    }
    write(1, "\n", 1);
    return (0);
}

// gcc -W -Wall -Wextra -Werror last_word.c
// ./a.out "FOR PONY" | cat -e
// ./a.out "this        ...       is sparta, then again, maybe    not" | cat -e
// ./a.out "   " | cat -e
// ./a.out "a" "b" | cat -e
// ./a.out "  lorem,ipsum  " | cat -e