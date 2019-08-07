#include <unistd.h>

int main(int argc, char **argv)
{
    int i;
    if (argc != 2)
    {
        write(1, "a\n", 2);
        return (0);
    }
    i = 0;
    while (argv[1][i] != 0)
    {
        if ( argv[1][i] == 'a')
        {
            write(1, "a\n", 2);
            return (0);
        }
        i++;
    }
    if (i > 0)
        write(1, "\n", 1);
    return (0);
}