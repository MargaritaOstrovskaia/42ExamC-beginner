#include <unistd.h>

int is_double(char *s, int pos, char ch)
{
    int i;

    i = 0;
    while (i < pos)
    {
        if (s[i] == ch)
            return (1);
        i++;
    }
    return (0);
}

void ft_union(char *s1, char *s2)
{
    int i;
    int j;

    i = 0;
    while (s1[i])
    {
        if (!is_double(s1, i, s1[i]))
            write(1, &s1[i], 1);
        i++;
    }
    j = 0;
    while (s2[j])
    {
        if (!is_double(s2, j, s2[j]))
            if (!is_double(s1, i, s2[j]))
                write(1, &s2[j], 1);
        j++;
    }
}

int main(int argc, char **argv)
{

    if (argc == 3)
        ft_union(argv[1], argv[2]);
    write(1, "\n", 1);
    return (0);
}

// gcc -W -Wall -Wextra -Werror union.c
// ./a.out zpadinton "paqefwtdjetyiytjneytjoeyjnejeyj" | cat -e
// ./a.out ddf6vewg64f gtwthgdwthdwfteewhrtag6h4ffdhsd | cat -e
// ./a.out "rien" "cette phrase ne cache rien" | cat -e
// ./a.out "rien" | cat -e
// ./a.out | cat -e