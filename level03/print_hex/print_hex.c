#include <unistd.h>

int is_delimiter(char c)
{
    if ((c >= 9 && c <= 13) || c == 32)
        return (1);
    return (0);
}

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

void print_hex(int n)
{
    char c;
    char *base;

    base = "0123456789abcdef";
    if ((n / 16) != 0)
        print_hex(n / 16);
    c = base[n % 16];
    write(1, &c, 1);
}

int main(int argc, char **argv)
{
    int n;

    if (argc == 2)
    {
        n = ft_atoi(argv[1]);
        print_hex(n);
    }
    write(1, "\n", 1);
    return (0);
}

// gcc -W -Wall -Wextra -Werror print_hex.c
// ./a.out "10" | cat -e
// ./a.out "255" | cat -e
// ./a.out "5156454" | cat -e
// ./a.out | cat -e