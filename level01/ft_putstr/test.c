#include <unistd.h>

void ft_putstr(char *str);

int main(int argc, char **argv)
{
    if (argc == 2)
        ft_putstr((argv[1]));
    write(1, "\n", 1);
    return (0);
}