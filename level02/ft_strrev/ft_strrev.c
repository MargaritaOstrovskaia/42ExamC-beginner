char    *ft_strrev(char *str)
{
    int i;
    int len;
    char c;

    len = 0;
    while (str[len])
        len++;
    i = 0;
    while (i < len / 2)
    {
        c = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = c;
        i++;
    }
    return (str);
}