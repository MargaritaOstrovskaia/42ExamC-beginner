#include <stdio.h>
#include <stdlib.h>

#define IS_DIGIT(c) (c >= '0' && c <= '9')
#define IS_OP(c) (c == '+' || c == '-' || c == '*' || c == '/' || c == '%')

int		do_op(int *num, char op)
{
	if (op == '+')
		*num += *(num + 1);
	else if (op == '-')
		*num -= *(num + 1);
	else if (op == '*')
		*num *= *(num + 1);
	else if (*(num + 1) == 0)
		return (-1);
	else if (op == '/')
		*num /= *(num + 1);
	else if (op == '%')
		*num %= *(num + 1);
	else
		return (-1);
	return (0);
}

int	rpn_calc(char *s)
{
	int	i = -1;
	int	nums[4096];

	while (*s)
	{
		if (*s != ' ')
		{
			if (IS_DIGIT(*s) || (*s == '-' && IS_DIGIT(*(s + 1))))
			{
				nums[++i] = atoi(s++);
				while (IS_DIGIT(*s))
					s++;
			}
			else if (IS_OP(*s))
			{
				if (do_op(&nums[i - 1], *s) == -1)
					return (-1);
				i -= 1;
				s++;
			}
		}
		else
			s++;
	}
	if (i != 0)
		return (-1);
	printf("%d\n", nums[i]);
	return (0);
}

int		main(int argc, char **argv)
{
	int res = 0;

	if (argc == 2)
		res = rpn_calc(argv[1]);
	if (argc != 2 || res == -1)
		printf("Error\n");
	return (0);
}