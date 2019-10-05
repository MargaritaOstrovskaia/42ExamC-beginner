#include <unistd.h>

int is_upper(char c)
{
    if (c >= 'A' && c <= 'Z')
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
            if (is_upper(c))
            {
                if (i > 0)
                    write(1, "_", 1);
                c += 32;
            }
            write(1, &c, 1);
            i++;
        }
    }
    write(1, "\n", 1);
    return (0);
}