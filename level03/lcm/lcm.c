#include <stdio.h>

unsigned int    hcf(unsigned int a, unsigned int b)
{
    if (b == 0)
        return (a);
    return (hcf(b, a % b));
}

unsigned int    lcm(unsigned int a, unsigned int b)
{
    unsigned int g;
    unsigned int m;

    g = hcf(a, b);
    m = a * b;
    if (m == 0)
        return (0);
    if (m < 0)
        m = -m;
    printf("g = %d, m = %d\n", g, m);
    return (m / g);
}

int main(void)
{
    unsigned int a = 4;
    unsigned int b = 26;
    unsigned int r = lcm(a , b);

    printf("lcm %d\n", r);
    return (0);
}

// gcc -W -Wall -Wextra -Werror lcm.c
// ./a.out