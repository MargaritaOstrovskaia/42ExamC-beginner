#include <unistd.h>

int main(int argc, char **argv)
{
    int i;
    char c;

    if (argc == 2)
    {
        i = 0;
        while (argv[1][i] != 0)
        {
            if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
                c = ((argv[1][i] - 'a') + 13) % 26 + 'a';
            else if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
                c = ((argv[1][i] - 'A') + 13) % 26 + 'A';
            else
                c = argv[1][i];
            write(1, &c, 1);
            i++;
        }
    }
    write(1, "\n", 1);
    return (0);
}

// gcc -W -Wall -Wextra -Werror rot_13.c
// ./a.out "My horse is Amazing." | cat -e
// ./a.out "abc"
// ./a.out "AkjhZ zLKIJz , 23y " | cat -e
// ./a.out "" | cat -e
// ./a.out | cat -e

