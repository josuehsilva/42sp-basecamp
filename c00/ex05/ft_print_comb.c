#include <unistd.h>

void	ft_print_comb(void)
{
	char	numbers[3];

	numbers[0] = '0';
	numbers[1] = '1';
	numbers[2] = '2';
	while (numbers[0] <= '7')
	{
		while (numbers[1] <= '8')
		{
			while (numbers[2] <= '9')
			{
				write(1, numbers, 3);
				if (!(numbers[0] == '7' && numbers[1] == '8'))
				{
					write(1, ", ", 2);
				}
				numbers[2]++;
			}
			numbers[1]++;
			numbers[2] = numbers[1] + 1;
		}
		numbers[0]++;
		numbers[1] = numbers[0] + 1;
		numbers[2] = numbers[1] + 1;
	}
}
