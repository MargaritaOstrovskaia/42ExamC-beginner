#include <unistd.h>

void	print_bits(unsigned char octet)
{
    int i;

    i = 128;
    while (i > 0)
    {
        if (i & octet)
            write(1, "1", 1);
        else
            write(1, "0", 1);
        i >>= 1;
    }
}