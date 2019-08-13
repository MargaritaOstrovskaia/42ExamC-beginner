#include <stdio.h>
#include <stdlib.h>

int	pgcd(int a, int b)
{
	if (b == 0)
		return (a);
	return (pgcd(b, a % b));
}

int	main(int argc, char **argv)
{
	int a;
	int b;

	if (argc == 3)
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		if (a >= 0 && b >= 0)
			printf("%d\n",  pgcd(a, b));
	}
	else
		printf("\n");
	return (0);
}
