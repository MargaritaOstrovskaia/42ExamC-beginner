#define SET_UP(x) ((x >= 'a' && x <= 'f') ? (x - 32) : (x))

int is_delimiter(char c)
{
    if ((c >= 9 && c <= 13) || c == ' ')
        return (1);
    return (0);
}

int	ft_atoi_base(const char *str, int str_base)
{
    int i;
    int x;
    int sign;
    int res;

    res = 0;
    i = 0;
    while (str[i] && is_delimiter(str[i]))
        i++;
    sign = 1;
    if (str[i] == '-')
        sign = -1;
    if (str[i] == '-' || str[i] == '+')
        i++;
    while (str[i])
    {
        if (str[i] >= '0' && str[i] <= '9')
            x = str[i] - '0';
        else if (SET_UP(str[i]) >= 'A' && SET_UP(str[i]) <= 'F')
            x = 10 + SET_UP(str[i]) - 'A';
        else
            x = -1;
        if (x >= 0 && x < str_base)
            res = res * str_base + x * sign;
        else
            break ;
        i++;
    }
    return (res);
}