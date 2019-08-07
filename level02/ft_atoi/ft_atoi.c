#include <stdio.h>
#include <stdlib.h>

int skip_tab(const char *s)
{
    int i;

    i = 0;
    while ( s[i] != 0 && ((s[i] >= 9 && s[i] <= 13) || s[i] == ' '))
        i++;
    return (i);
}

int is_num(char c)
{
    if (c >= '0' && c <= '9')
        return (1);
    return (0);
}

int	ft_atoi(const char *str)
{
    int i;
    int sign;
    int res;

    sign = 1;
    i = skip_tab(str);
    if (str[i] == '-')
        sign = -1;
    if (str[i] == '-' || str[i] == '+')
        i++;
    if (str[i] == 0)
        return (0);
    res = 0;
    while (str[i] != 0 && is_num(str[i]))
        res = res * 10 + (str[i++] - '0') * sign;
    return (res);
}

int main (int argc, char **argv)
{
    //argc = 2;
    //argv[1] = "  df   123v";
    if (argc == 2)
        printf("atoi = %d, ft_atoi = %d\n", atoi(argv[1]), ft_atoi(argv[1]));
    return (0);
}

// gcc -W -Wall -Wextra -Werror ft_atoi.c
// ./a.out "     123v" | cat -e
// ./a.out "  df   123v" | cat -e
// ./a.out "-9828   " | cat -e
// ./a.out "-2147483848" | cat -e
// ./a.out "2147483847" | cat -e
// ./a.out "214748384776433343" | cat -e
// ./a.out "0" | cat -e
// ./a.out "1" | cat -e
// ./a.out | cat -e