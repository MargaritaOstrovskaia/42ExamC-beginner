#include <unistd.h>

int	main(void)
{
    char i;
    char j;

    i = 'a';
    while (i <= 'y')
    {
        j = i + 1 - 32;
        write(1, &i, 1);
        write(1, &j, 1);
        i = i + 2;
    }
    write(1, "\n", 1);
	return (0);
}
