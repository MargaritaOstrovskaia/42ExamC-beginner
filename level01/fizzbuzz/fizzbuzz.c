#include <unistd.h>

void    ft_putnbr(int n)
{
    char c;

    if (n < 10)
    {
        c = n + '0';
        write(1, &c, 1);
    }
    else
    {
        ft_putnbr(n / 10);
        ft_putnbr(n % 10);
    }
}

int main(void)
{
    int i;

    i = 0;
    while (++i <= 100)
    {
        if (!(i % 3))
            write(1, "fizz", 4);
        if (!(i % 5))
            write(1, "buzz", 4);
        if ((i % 3) && (i % 5))
            ft_putnbr(i);
        write(1, "\n", 1);
    }
    return (0);
}
