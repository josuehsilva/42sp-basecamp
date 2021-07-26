#include <unistd.h>

void	space(int num1)
{
	if (num1 < 98)
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb2(void)
{
	int		num1;
	int		num2;
	char	n;

	num1 = 0;
	num2 = 1;
	while (num1 <= 98 && num2 <= 99)
	{
		n = (num1 / 10 + 48);
		write(1, &n, 1);
		n = (num1 % 10 + 48);
		write(1, &n, 1);
		write(1, " ", 1);
		n = (num2 / 10 + 48);
		write(1, &n, 1);
		n = (num2 % 10 + 48);
		write(1, &n, 1);
		num2++;
		space(num1);
		if (num2 == 99)
		{
			num2 = ++num1 + 1;
		}
	}
}
