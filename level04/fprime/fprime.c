#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void fprime(int n)
{
    int next;

    if (n == 1)
        printf("%d", 1);
    else
    {
        next = 2;
        while (next < n)
        {
            while (n % next == 0)
            {
                printf("%d", next);
                n = n / next;
                printf("%s", "*");
            }
            if (n == 1)
                break ;
            next++;
        }
        printf("%d", next);
    }
    printf("\n");
}

int main(int argc, char **argv)
{
    if (argc == 2)
        fprime(atoi(argv[1]));
    else
        write(1, "\n", 1);
    return (0);
}

// gcc -W -Wall -Wextra -Werror fprime.c
// ./a.out 225225 | cat -e
// ./a.out 8333325 | cat -e
// ./a.out 9539 | cat -e
// ./a.out 804577 | cat -e
// ./a.out 42 | cat -e
// ./a.out 1 | cat -e
// ./a.out | cat -e
// ./a.out 42 21 | cat -e