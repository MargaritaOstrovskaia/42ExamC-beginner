#define SIZE 2048

#include <unistd.h>
#include <stdlib.h>

void	brainfuck(char *s)
{
	int i;
    int j;
    int loop;
    char c;
	int *r;

	r = (int*)malloc(sizeof(int) * SIZE);
	if (r)
	{
		i = 0;
		while (i < SIZE)
			r[i++] = 0;
		i = 0;
        j = 0;
		while (s[i] != 0)
		{
			if (s[i] == '.')
            {
                c = r[j];
                write(1, &c, 1);
            }
            else if (s[i] == '+')
                r[j]++;
            else if (s[i] == '-')
                r[j]--;
            else if (s[i] == '>')
                j++;
            else if (s[i] == '<')
                j--;
            if (s[i] == '[' && r[j] == 0)
            {
                loop = 1;
                while (loop)
                {
                    i++;
                    s[i] == '[' ? loop++ : loop;
                    s[i] == ']' ? loop-- : loop;
                }
            }
            if (s[i] == ']' && r[j] != 0)
            {
                loop = 1;
                while (loop)
                {
                    i--;
                    s[i] == ']' ? loop++ : loop;
                    s[i] == '[' ? loop-- : loop;
                }
            }
            i++;
		}
	}
    free(r);
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		brainfuck(argv[1]);
	else
        write(1, "\n", 1);
	return (0);
}
