#define SET_UP(x) (x >= 'A' && x <= 'Z') ? (x + 32) : x

#include <stdio.h>

int is_alph(char c)
{
    c = SET_UP(c);
    if (c >= 'a' && c <= 'z')
        return (1);
    return (0);
}

int is_double(char *str, int pos)
{
    int i;
    char s;
    char p;
    
    i = 0;
    p = SET_UP(str[pos]);
    while (i < pos)
    {
        s = SET_UP(str[i]);
        if (s == p)
            return (1);
        i++;
    }
    return (0);
}

int alph_counter(char *str, char c)
{
    int i;
    char s;
    int counter;
    
    i = 0;
    counter = 0;
    c = SET_UP(c);
    while (str[i] != 0)
    {
        s = SET_UP(str[i]);
        if (s == c)
            counter++;
        i++;
    }
    return (counter);
}

void	count_alpha(char *str)
{
    int i;
    int counter;
    char ch;
    int is_find;
    
    i = 0;
    is_find = 0;
    while (str[i] != 0)
    {
        if (is_alph(str[i]) && !is_double(str, i))
        {
            counter = alph_counter(str, str[i]);
            if (is_find == 1)
                printf(", ");
            ch = SET_UP(str[i]);
            printf("%d%c", counter, ch);
            is_find = 1;
        }
        i++;
    }
}

int	main(int argc, char **argv)
{
	if (argc == 2)
        count_alpha(argv[1]);
    printf("\n");
	return (0);
}
