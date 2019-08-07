#include <unistd.h>

int main(int argc, char **argv)
{
    int i;

    if (argc == 2)
    {
        i = 0;
        while (argv[1][i] != 0)
            i++;
        while (--i >= 0)
            write(1, &argv[1][i], 1);
    }
    write(1, "\n", 1);
    return (0);
}

// gcc -W -Wall -Wextra -Werror rev_print.c
// ./a.out "zaz" | cat -e
// ./a.out "dub0 a POIL" | cat -e
// ./a.out "" | cat -e
// ./a.out | cat -e

