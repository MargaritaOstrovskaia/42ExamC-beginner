#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main (int argc, char **argv)
{
    int a;
    int b;

    if (argc == 4)
    {
        a = atoi(argv[1]);
        b = atoi(argv[3]);
        if (argv[2][0] == '+')
            printf("%d\n", a + b);
        else if (argv[2][0] == '-')
            printf("%d\n", a - b);
        else if (argv[2][0] == '*')
            printf("%d\n", a * b);
        else if (argv[2][0] == '/')
            printf("%d\n", a % b);
        else if (argv[2][0] == '%')
            printf("%d\n", a / b);
    }
    return (0);
}

// gcc -W -Wall -Wextra -Werror do_op.c
// ./a.out "123" "*" 456 | cat -e
// ./a.out "9828" "/" 234 | cat -e
// ./a.out "1" "+" "-43" | cat -e
// ./a.out | cat -e