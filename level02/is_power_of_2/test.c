#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int is_power_of_2_1(unsigned int n);
int is_power_of_2_2(unsigned int n);

int main(int argc, char **argv)
{
    unsigned int    n;
    clock_t         begin;
    clock_t         end;
    double          time_spent;

    if (argc != 2)
        return (0);
    n = atoi(argv[1]); // 4294967296 don't work in is_power_of_2_2()

    begin = clock();
    printf("Is %u a power of 2? %d (bit)\n", n, is_power_of_2_1(n));
    end = clock();
    time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
    printf("%f\n", time_spent);

    // unsigned long - range from 0 to 4,294,967,295
    begin = clock();
    printf("Is %u a power of 2? %d (*)\n", n, is_power_of_2_2(n));
    end = clock();
    time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
    printf("%f\n", time_spent);
}