#include <stdlib.h>

int     get_size(int value, int base)
{
    int n = value;
    int size = 0;

    if (value == 0)
        return (1);
    while (n)
    {
        n /= base;
        size++;
    }
    if (value < 0)
    {
        if (base == 10)
            size++;
    }
    return (size);
}

char    *ft_itoa_base(int value, int base)
{
    char    *hex = "0123456789ABCDEF";
    int     sign = 1;

    int size = get_size(value, base);
    char *s = (char*)malloc(sizeof(char) * (size + 1));
    s[size] = 0;
    if (value < 0)
    {
        if (base == 10)
            s[0] = '-';
        sign = -1;
    }
    int n = value;
    while (size--)
    {
        s[size] = hex[n % base * sign];
        n = n / base;
        if (size == 1 && value < 0 && base == 10)
            break ;
    }
    return (s);
}