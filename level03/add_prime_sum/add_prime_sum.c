#include <unistd.h>

int ft_atoi(char *s)
{
    int i;
    int sign;
    int res;

    res = 0;
    i = 0;
    sign = 1;
    while (s[i] && ((s[i] >= 9 && s[i] <= 13) || s[i] == ' '))
        i++;
    if (s[i] == '-')
        sign = -1;
    if (s[i] == '-' || s[i] == '+')
        i++;
    while (s[i])
    {
        if (s[i] < '0' || s[i] > '9')
            break ;
        res = res * 10 + (s[i] - '0') * sign;
        i++;
    }
    return (res);
}

int ft_isprime(int n)
{
    int i;

    if (n == 2 || n == 3 || n == 5)
        return (1);
    i = 2;
    while (i < n)
    {
        if ((n % i) == 0)
            return (0);
        i++;
    }
    return (1);
}

int  prime_sum(char *s)
{
    int i;
    int num;
    int res;

    res = 0;
    num = ft_atoi(s);
    if (num >= 2)
    {
        i = 2;
        while (i <= num)
        {
            if (ft_isprime(i))
                res += i;
            i++;
        }
    }
    return res;
}

void ft_putnbr(int n)
{
    char c;

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

int main(int argc, char **argv)
{
    int res;

    if (argc == 2)
    {
        res = prime_sum(argv[1]);
        ft_putnbr(res);
    }
    else
        write(1, "0", 1);
    write(1, "\n", 1);
    return (0);
}