int is_power_of_2_1(unsigned int n)
{
    if (n == 0)
        return (0);
    return ((n & (-n)) == n ? 1 : 0);
}

int	is_power_of_2_2(unsigned int n)
{
	unsigned long power;

	power = 1;
	while (power < n)
		power = power * 2;
	if (power == n)
		return (1);
	return (0);
}