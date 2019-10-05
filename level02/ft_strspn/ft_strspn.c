int     is_contains(char c, const char *s)
{
    int i;

    while (s[i])
    {
        if (s[i] == c)
            return (1);
        i++;
    }
    return (0);
}

size_t	ft_strspn(const char *s, const char *accept)
{
    int i;
    int j;

    i = 0;
    while (s[i])
    {
        if (is_contains(s[i], accept))
            break ;
        i++;
    }
    return (i);
}