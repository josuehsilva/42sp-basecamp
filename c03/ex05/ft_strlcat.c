unsigned int	sizet(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != 0)
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	k;

	i = sizet(dest);
	k = sizet(src);
	j = 0;
	while (src[j] != 0)
	{
		dest[i + j] = src[j];
		j++;
		if (i + j == size - 1)
		{
			break ;
		}
	}
	dest[i + j] = 0;
	return (i + k);
}
