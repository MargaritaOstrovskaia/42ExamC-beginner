#include <stdio.h>
#include <stdlib.h>

void sort_int_tab(int *tab, unsigned int size);

void print(int *tab, int size)
{
    int i;

    i = 0;
    while (i < size)
    {
        printf("%d ", tab[i]);
        i++;
    }
    printf(" \n");
}

int main(int argc, char **argv)
{
    int i;
    int tab[255];

    if (argc > 1)
    {
        i = 0;
        while (++i < argc)
            tab[i - 1] = atoi(argv[i]);
        // insertion sort
        sort_int_tab(tab, argc - 1);
        print(tab, argc - 1);
    }
    return (0);
}