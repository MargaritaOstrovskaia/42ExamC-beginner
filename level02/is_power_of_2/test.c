#include <stdio.h>
#include <stdlib.h>

int is_power_of_2(unsigned int n);

int main(int argc, char **argv)
{
    int i;
    int n;

    if (argc > 1)
    {
        i = 1;
        while (i < argc)
        {
            n = atoi(argv[i]);
            printf("%d\tis_power_of_2 = %d\n", n, is_power_of_2(n));
            i++;
        }
    }
    return (0);
}