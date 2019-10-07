#include <unistd.h>

#define OPEN_BR(x) (x == '(' || x == '[' || x == '{')
#define CLOSE_BR(y) (y == ')' || y == ']' || y == '}')

int    brackets(char *s)
{
    int i = 0;
    char br[4096];

    while (i < 4096)
        br[i++] = 0;
    i = 0;
    while (*s)
    {
        if (OPEN_BR(*s))
            br[++i] = *s;
        else if (CLOSE_BR(*s))
        {
            if ((br[i] == '(' && *s == ')')
                || (br[i] == '[' && *s == ']')
                || (br[i] == '{' && *s == '}'))
                i--;
            else
                return (0);
        }
        s++;
    }
    if (i == 0)
        return (1);
    else
        return (0);
}

int     main(int argc, char **argv)
{
    int i = 1;

    if (argc > 1)
    {
        while (i < argc)
        {
            if (brackets(argv[1]))
                write(1, "OK", 2);
            else
                write(1, "Error", 5);
            write(1, "\n", 1);
            i++;
        }
    }
    else
        write(1, "\n", 1);
    return (0);
}