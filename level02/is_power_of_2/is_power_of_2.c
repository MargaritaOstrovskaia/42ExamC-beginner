#include <stdio.h>

int	    is_power_of_2(unsigned int n)
{
    return ((n & (-n)) == n ? 1 : 0);
}

int main(void)
{
    printf("2  is_power_of_2 = %d\n", is_power_of_2(2));
    printf("5  is_power_of_2 = %d\n", is_power_of_2(5));
    printf("24 is_power_of_2 = %d\n", is_power_of_2(24));
    printf("64 is_power_of_2 = %d\n", is_power_of_2(64));
    return (0);
}

// gcc -W -Wall -Wextra -Werror is_power_of_2.c
// ./a.out