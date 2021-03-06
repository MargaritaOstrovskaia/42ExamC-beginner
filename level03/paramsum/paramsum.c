#include <unistd.h>

void    putnbr(int n)
{
    char c;

    if (n < 0)
    {
        write(1, "-", 1);
        n = -n;
    }
    if (n < 10) {
        c = n + '0';
        write(1, &c, 1);
    }
    else
    {
        putnbr(n / 10);
        putnbr(n % 10);
    }
}

int     main(int argc, char **argv)
{
    if (argc > 0 && argv[0])
        putnbr(argc - 1);
    else
        putnbr(0);
    write(1, "\n", 1);
    return (0);
}