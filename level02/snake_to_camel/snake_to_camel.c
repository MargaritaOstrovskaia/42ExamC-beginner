#include <unistd.h>

int is_lower(char c)
{
    if (c >= 'a' && c <= 'z')
        return (1);
    return (0);
}

int main(int argc, char **argv)
{
    int     i;
    char    c;

    if (argc == 2)
    {
        i = 0;
        while (argv[1][i])
        {
            c = argv[1][i];
            if (i > 0 && argv[1][i - 1] == '_' && is_lower(c))
                c -= 32;
            if (c != '_')
                write(1, &c, 1);
            i++;
        }
    }
    write(1, "\n", 1);
    return (0);
}