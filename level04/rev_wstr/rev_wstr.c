#include <stdlib.h>
#include <unistd.h>

int	is_delimiter(char c)
{
    if ((c >= 9 && c <= 13) || c == 32)
        return (1);
    return (0);
}

int	word_count(char *str)
{
    int i;
    int count;

    i = 0;
    count = 0;
    while (str[i] != 0)
    {
        if ((i == 0 || is_delimiter(str[i - 1])) && !is_delimiter(str[i]))
            count++;
        i++;
    }
    return (count);
}

int word_pos(char *str, int n)
{
    int i;
    int count;

    i = 0;
    count = 0;
    while (str[i] != 0)
    {
        if ((i == 0 || is_delimiter(str[i - 1])) && !is_delimiter(str[i]))
        {
            count++;
            if (count == n)
                return (i);
        }
        i++;
    }
    return (-1);
}

int main(int argc, char **argv)
{
    int pos;
    int count;

    if (argc == 2)
    {
        count = word_count(argv[1]);
        while (count > 0)
        {
            pos = word_pos(argv[1], count);
            while (argv[1][pos] && !is_delimiter(argv[1][pos]))
            {
                write(1, &argv[1][pos], 1);
                pos++;
            }
            count--;
            if (count != 0)
                write(1, " ", 1);
        }
    }
    write(1, "\n", 1);
    return (0);
}