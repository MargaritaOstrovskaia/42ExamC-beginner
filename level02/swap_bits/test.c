#include <unistd.h>
#include <stdlib.h>

unsigned char	swap_bits(unsigned char octet);
void            print_bits(unsigned char octet);

int             main(int argc, char **argv)
{
    int a;

    if (argc == 2)
    {
        a = atoi(argv[1]);
        print_bits(swap_bits(a));
        write(1, "\n", 1);
    }
    return (0);
}