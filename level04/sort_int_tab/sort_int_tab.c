void sort_int_tab(int *tab, unsigned int size)
{
    int pos;
    int val;
    unsigned int i;

    i = 0;
    while (++i < size)
    {
        pos = i;
        val = tab[i];
        while (pos > 0 && (tab[pos - 1] > val))
        {
            tab[pos] = tab[pos - 1];
            pos--;
        }
        tab[pos] = val;
    }
}