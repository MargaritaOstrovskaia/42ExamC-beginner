int		max(int* tab, unsigned int len)
{
    unsigned int i;
    int res;

    if (len == 0)
        return (0);

    res = tab[0];
    i = 1;
    if (i < len)
    {
        if (tab[i] > tab[i - 1])
            res = tab[i];
        i++;
    }
    return (res);
}
