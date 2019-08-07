#include <unistd.h>

int	ft_atoi(char *s)
{
    int i;
    int sign;
    int res;

    sign = 1;
    i = 0;
    while (s[i] != 0 && ((s[i] >= 9 && s[i] <= 13) || s[i] == ' '))
        i++;
    if (s[i] == '-')
        sign = -1;
    if (s[i] == '-' || s[i] == '+')
        i++;
    if (s[i] == 0)
        return (0);
    res = 0;
    while (s[i] != 0 && (s[i] >= '0' && s[i] <= '9'))
        res = res * 10 + (s[i++] - '0');
    return (res * sign);
}

void ft_putnbr(int n)
{
    int i;
    char c;

    i = 0;
    if (n < 0)
    {
        write(1, "-", 1);
        n = -n;
    }
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

void tab_mult(int n)
{
    int i;

    i = 0;
    while (++i < 10)
    {
        ft_putnbr(i);
        write(1, " x ", 3);
        ft_putnbr(n);
        write(1, " = ", 3);
        ft_putnbr(i * n);
        write(1, "\n", 1);
    }
}

int main(int argc, char **argv)
{
    if (argc == 2)
        tab_mult(ft_atoi(argv[1]));
    else
        write(1, "\n", 1);
    return (0);
}

// gcc -W -Wall -Wextra -Werror tab_mult.c
// ./a.out 9
// ./a.out 19
// ./a.out | cat -e