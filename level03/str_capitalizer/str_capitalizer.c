#include <unistd.h>

int is_delimiter(char c)
{
    if ((c >= 9 && c <= 13) || c == 32)
        return (1);
    return (0);
}

void str_capitalizer(char *s)
{
    int i;

    i = 0;
    while (s[i])
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
            s[i] = s[i] + 32;
        if ((s[i] >= 'a' && s[i] <= 'z') && (i == 0 || is_delimiter(s[i - 1])))
            s[i] = s[i] - 32;
        write(1, &s[i], 1);
        i++;
    }
}

int main(int argc, char **argv)
{
    int i;

    if (argc >= 2)
    {
        i = 0;
        while (++i < argc)
        {
            str_capitalizer(argv[i]);
            write(1, "\n", 1);
        }
    }
    else
        write(1, "\n", 1);
    return (0);
}