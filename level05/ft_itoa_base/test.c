#include <stdio.h>
#include <limits.h>

char	*ft_itoa_base(int value, int base);

int	main(void)
{
    int base;
    int test;

    base = 10;
    test = INT_MIN;
    printf("%s ~ %d\n", ft_itoa_base(test, base), test);
    test = -1;
    printf("%s ~ %d\n", ft_itoa_base(test, base), test);
    test = 0;
    printf("%s ~ %d\n", ft_itoa_base(test, base), test);
    test = 1;
    printf("%s ~ %d\n", ft_itoa_base(test, base), test);
    test = INT_MAX;
    printf("%s\n%d\n", ft_itoa_base(test, base), test);

    base = 8;
    test = 28;
    printf("%s ~ %o\n", ft_itoa_base(test, base), test);
    test = INT_MAX;
    printf("%s ~ %o\n", ft_itoa_base(test, base), test);

    base = 16;
    test = 0xABCDEF9;
    printf("%s ~ %x\n", ft_itoa_base(test, base), test);
    test = INT_MAX;
    printf("%s ~ %x\n", ft_itoa_base(test, base), test);
    return (0);
}