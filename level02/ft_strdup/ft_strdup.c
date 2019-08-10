#include <stdlib.h>

char    *ft_strdup(char *src)
{
    char *dest;
    int i;

    i = 0;
    while (src[i] != 0)
        i++;
    dest = (char*)malloc(sizeof(char) * (i + 1));
    i = 0;
    while (src[i] != 0)
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = 0;
    return (dest);
}