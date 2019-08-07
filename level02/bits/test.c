#include <stdio.h>

unsigned char	swap_bits(unsigned char octet);
unsigned char	reverse_bits(unsigned char octet);
void            print_bits(unsigned char octet);

int             main(void)
{
    printf("\nprint_bits(8): \n");
    print_bits(8);
    printf("\nswap_bits(8): \n");
    print_bits(swap_bits(8));
    printf("\nreverse_bits(8): \n");
    print_bits(reverse_bits(8));
    printf(" \n");
    return (0);
}