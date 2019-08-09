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
                c = argv[1][i] - 32;
            else if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
                c = argv[1][i] + 32;
            else
                c = argv[1][i];
            write(1, &c, 1);
            i++;
        }
    }
    write(1, "\n", 1);
    return (0);
}