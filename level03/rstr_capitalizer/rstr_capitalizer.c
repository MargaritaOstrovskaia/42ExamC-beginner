#include <unistd.h>

int		ft_isdelimeter(char c)
{
	if ((c >= 9 && c <= 13) || c == 32)
		return (1);
	else
		return (0);
}

int		ft_ischaracter(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

void	ft_setlow(char *str)
{
	int i;

	i = 0;
	while (str[i] != 0)
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		i++;
	}
}

int		main(int argc, char **argv)
{
	int i;
	int j;
	
	if (argc > 1)
	{
		i = 1;
		while (i < argc)
		{
			ft_setlow(argv[i]);
			j = 0;
			while (argv[i][j] != 0)
			{
				if (ft_ischaracter(argv[i][j]) && (argv[i][j + 1] == 0 || ft_isdelimeter(argv[i][j + 1])))
						argv[i][j] = argv[i][j] - 32;
				write(1, &argv[i][j], 1);
				j++;
			}
			write(1, "\n", 1);
			i++;
		}
	}
	else
		write(1, "\n", 1);
	return (0);
}
