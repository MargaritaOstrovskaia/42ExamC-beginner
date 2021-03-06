#include <unistd.h>

int is_delimiter(char c)
{
    if ((c >= 9 && c <= 13) || c == ' ')
        return (1);
    return (0);
}

void ft_epur_str(char *s)
{
    int i;

    i = 0;
    while (s[i] && is_delimiter(s[i]))
        i++;
    while (s[i])
    {
        if (is_delimiter(s[i]))
        {
            if (!is_delimiter(s[i + 1]) && s[i + 1] != 0)
                write(1, " ", 1);
        }
        else
            write(1, &s[i], 1);
        i++;
    }
}

int main(int argc, char **argv)
{
    if (argc == 2)
    {
        ft_epur_str(argv[1]);
    }
    write(1, "\n", 1);
    return (0);
}