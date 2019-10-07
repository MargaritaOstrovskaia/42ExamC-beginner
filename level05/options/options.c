#include <unistd.h>

void	ft_putnbr(int n)
{
    if (n > 9)
        ft_putnbr(n / 10);
    char ch = n % 10 + '0';
    write(1, &ch, 1);
}

int		is_letter(char ch)
{
    if (ch >= 'a' && ch <= 'z')
        return (1);
    return (0);
}

int		get_power(int p)
{
    int res = 2;

    if (p == 0)
        return (1);
    while (--p)
        res *= 2;
    return (res);
}

void    print_err(int code)
{
    if (code == -1)
        write(1, "Invalid Option\n", 15);
    else if (code == 0)
        write(1, "options: abcdefghijklmnopqrstuvwxyz\n", 36);
}

void	options(char **s)
{
    int i;
    int j;
    int	res = 0;

    i = 1;
    while (s[i])
    {
        if (s[i][0] != '-')
            return (print_err(-1));
        j = 1;
        while (s[i][j])
        {
            if (j == 1 && s[i][j] == 'h')
                return (print_err(0));
            if (!is_letter(s[i][j]))
                return (print_err(-1));
            res += get_power(s[i][j] - 'a');
            j++;
        }
        i++;
    }
    ft_putnbr(res);
    write(1, "\n", 1);
}

int		main(int argc, char **argv)
{
    if (argc > 1)
        options(argv);
    else
        print_err(0);
    return (0);
}