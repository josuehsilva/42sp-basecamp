char	*ft_strcapitalize(char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	while (str[i] != 0)
	{
		if ((str[i] >= 'a' && str[i] <= 'z')
			|| (str[i] >= 'A' && str[i] <= 'Z')
			|| (str[i] >= '0' && str[i] <= '9'))
		{
			if ((j == 1) && (str[i] >= 'a' && str[i] <= 'z'))
				str[i] = str[i] - 32;
			else if ((j == 0) && (str[i] >= 'A' && str[i] <= 'Z'))
				str[i] = str[i] + 32;
			j = 0;
		}
		else
			j = 1;
		i++;
	}
	return (str);
}
