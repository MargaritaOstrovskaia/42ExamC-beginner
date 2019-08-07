#include <unistd.h>

int main (int argc, char **argv)
{
    int i;
    char c;

    if (argc == 2)
    {
        i = 0;
        while (argv[1][i] != 0)
        {
            c = argv[1][i];
            if (c >= 'a' && c <= 'z')
            {
                if (c > 'm')
                    c = 'a' + ('z' - c);
                else
                    c = 'z' - (c - 'a');
            }
            else if (c >= 'A' && c <= 'Z')
            {
                if (c > 'M')
                    c = 'A' + ('Z' - c);
                else
                    c = 'Z' - (c - 'A');
            }
            write(1, &c, 1);
            i++;
        }
    }
    write(1, "\n", 1);
    return (0);
}

// gcc -W -Wall -Wextra -Werror alpha_mirror.c
// ./a.out "abc"
// ./a.out "My horse is Amazing." | cat -e
// ./a.out  | cat -e