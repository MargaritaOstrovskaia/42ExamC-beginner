#include <stdlib.h>
#include <unistd.h.h>

int is_delimiter(char c)
{
    if ((c >= 9 && c <= 13) || c == 32)
        return (1);
    return (0);
}

void rev_wstr(*s)
{
    int i;
    int j;

    i = 0;
    while (s[i])
        i++;
    i--;
    while (is_delimiter(s[i]))
        i--;
    while (i > 0)
    {
        j = 0;
        i--;
        if ()
    }
}

int main(int argc, char **argv)
{
    if (argc == 2)
        rev_wstr(argv[1]);
    write(1, "\n", 1);
    return (0);
}