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