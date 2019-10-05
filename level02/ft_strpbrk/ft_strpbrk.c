char    *ft_strpbrk(const char *s1, const char *s2)
{
    int j;

    i = 0;
    while (*s)
    {
        j = 0;
        while (reject[j])
        {
            if (*s == reject[j])
                return (s);
            j++;
        }
        s++;
    }
    return (NULL);
}