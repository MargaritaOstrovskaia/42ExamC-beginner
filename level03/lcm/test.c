#include <stdio.h>
#include <stdlib.h>

unsigned int    lcm(unsigned int a, unsigned int b);

int main(int argc, char **argv)
{
    unsigned int a;
    unsigned int b;
    unsigned int r;

    if (argc == 3 && atoi(argv[1]) >= 0 && atoi(argv[2]) >= 0)
    {
        a = atoi(argv[1]);
        b = atoi(argv[2]);
        r = lcm(a, b);
        printf("lcm = %d\n", r);
    }
    return (0);
}