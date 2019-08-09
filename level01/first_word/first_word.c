#include <unistd.h>

int is_delimiter(char c)
{
    if ((c >= 9 && c <= 13) || c == ' ')
        return (1);
    return (0);
}

int main(int argc, char **argv)
{
    int i;
    if (argc == 2)
    {
        i = 0;
        while (argv[1][i] != 0 && is_delimiter(argv[1][i]))
            i++;
        while (argv[1][i] != 0 && !is_delimiter(argv[1][i]))
        {
            write(1, &argv[1][i], 1);
            i++;
        }
    }
    write(1, "\n", 1);
    return (0);
}

