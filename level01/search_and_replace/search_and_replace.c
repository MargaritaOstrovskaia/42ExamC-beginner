#include <unistd.h>

int main(int argc, char **argv)
{
    int i;

    if (argc == 4)
    {
        if (!argv[2][1] && !argv[3][1])
        {
            i = 0;
            while (argv[1][i] != 0)
            {
                if (argv[1][i] == argv[2][0])
                    write(1, &argv[3][0], 1);
                else
                    write(1, &argv[1][i], 1);
                i++;
            }
        }
    }
    write(1, "\n", 1);
    return (0);
}
// gcc -W -Wall -Wextra -Werror search_and_replace.c
// ./a.out "Papache est un sabre" "a" "o"
// ./a.out "zaz" "art" "zul" | cat -e
// ./a.out "zaz" "r" "u" | cat -e
// ./a.out "jacob" "a" "b" "c" "e" | cat -e
// ./a.out "ZoZ eT Dovid oiME le METol." "o" "a" | cat -e
// ./a.out "wNcOre Un ExEmPle Pas Facilw a Ecrirw " "w" "e" | cat -e
