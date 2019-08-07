#include <unistd.h>

int	ft_findpos(char ch, char *str, int pos)
{
	while (str[pos] != 0)
	{
		if (str[pos] == ch)
			return pos;
		pos++;
	}
	return -1;
}

int	main (int argc, char **argv)
{
	int i;
	int j;

	if (argc == 3)
	{
		i = 0;
		j = 0;
		while (argv[1][i] != 0)
		{
			j = ft_findpos(argv[1][i], argv[2], j);
			if (j < 0)
				break ;
			i++;
		}
		if (argv[1][i] == 0)
			write(1, "1", 1);
		else
			write(1, "0", 1);
	}
	write(1, "\n", 1);
	return (0);
}
