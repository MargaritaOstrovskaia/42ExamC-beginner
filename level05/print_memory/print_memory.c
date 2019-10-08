#include <unistd.h>

void    print_hex(const unsigned char *addr, size_t size)
{
    char    *hex = "0123456789abcdef";
    size_t  i = 0;

    while (i < 16)
    {
        if (i < size)
        {
            write(1, hex + (addr[i] / 16), 1);
            write(1, hex + (addr[i] % 16), 1);
        }
        else
            write(1, "  ", 2);
        i++;
        if (i % 2 == 0)
            write(1, " ", 1);
    }
}

void    print_char(const unsigned char *addr, size_t size)
{
    size_t i = 0;

    while (i < 16 && i < size)
    {
        if (addr[i] >= 32 && addr[i] <= 127)
            write(1, &addr[i], 1);
        else
            write(1, ".", 1);
        i++;
    }
}

void    print_memory(const void *addr, size_t size)
{
    size_t i = 0;

    while (i < size)
    {
        print_hex(addr + i, size - i);
        print_char(addr + i, size - i);
        write(1, "\n", 1);
        i += 16;
    }
}