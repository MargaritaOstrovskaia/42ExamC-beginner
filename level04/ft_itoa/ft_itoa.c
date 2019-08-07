#include <stdio.h>
#include <stdlib.h>

int get_strlen (int n)
{
    int len;

    len = 0;
    if (n < 0)
    {
        n = -n;
        len++;
    }
    while (n / 10)
    {
        len++;
        n = n / 10;
    }
    if (n < 10)
        len++;
    return (len);
}

int get_power(int p)
{
    int i;

    i = 10;
    while (p - 1 > 0)
    {
        i = i * 10;
        p--;
    }
    return (i);
}

char	*ft_itoa(int nbr) {
    int i;
    int sign;
    int len;
    char *s;

    sign = 1;
    if (nbr < 0)
        sign = -1;
    len = get_strlen(nbr);
    s = (char *) malloc(sizeof(char) * (len + 1));
    i = 0;
    if (nbr < 0)
    {
        s[i++] = '-';
        len--;
    }
    while (len > 1)
    {
        s[i++] = ((nbr / get_power(len - 1)) % 10) * sign + '0';
        len--;
    }
    s[i++] = (nbr % 10) * sign + '0';
    s[i] = 0;
    return (s);
}

int main(void)
{
    printf("get_strlen = %d, %s\n", get_strlen(-25), ft_itoa(-25));
    printf("get_strlen = %d, %s\n", get_strlen(0), ft_itoa(0));
    printf("get_strlen = %d, %s\n", get_strlen(1), ft_itoa(1));
    printf("get_strlen = %d, %s\n", get_strlen(2147483647), ft_itoa(2147483647));
    printf("get_strlen = %d, %s\n", get_strlen(-2147483648), ft_itoa(-2147483648));
    return (0);
}

// gcc -W -Wall -Wextra -Werror ft_itoa.c
// ./a.out
