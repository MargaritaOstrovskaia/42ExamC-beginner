#include <unistd.h>

int is_delimiter(char c)
{
    if ((c >= 9 && c <= 13) || c == ' ')
        return (1);
    return (0);
}

void expand_str(char *s)
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
                write(1, "   ", 3);
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
        expand_str(argv[1]);
    }
    write(1, "\n", 1);
    return (0);
}

// gcc -W -Wall -Wextra -Werror expand_str.c
// ./a.out "vous voyez c'est facile d'afficher la meme chose" | cat -e
// ./a.out " seulement          la c'est      plus dur " | cat -e
// ./a.out "comme c'est cocasse" "vous avez entendu, Mathilde ?" | cat -e
// ./a.out "" | cat -e