int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if(n == 0)
	{
		return (0);
	}
	while (s1[i] == s2[i] && s1[i] != 0 && (i + 1 < n))
	{
		i++;
		if (s2[i] < 0)
		{
			s2[i] = s2[i] * (-1);
		}
	}
	return ((s1[i]) - (s2[i]));
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int		ft_strncmp(char *s1, char *s2, unsigned int n);

void	ft_strncmp_test(char *s1, char *s2, unsigned int n)
{
	int res;
	int ft_res;

	res = strncmp(s1, s2, n);
	ft_res = ft_strncmp(s1, s2, n);
	if (res != ft_res)
		printf("> KO, expected: %d, got: %d\n", res, ft_res);
	else
		printf("> OK, result: %d\n", ft_res);
}

int		main(void)
{
	char	*s1 = "abcdefghi";
	char	*s2 = "abcdEfghi";
	char	s3[] = {'a', 'b', -23, 'd', 'e', 'f', 'g', 'h', 'i', '\0'};
	int		offset;

	offset = 0;
	printf("[1] Testing strings \"%s\" and \"%s\"\n", s1, s2);
	while (offset < 10)
	{
		ft_strncmp_test(s1, s2, offset);
		offset++;
	}
	offset = 0;
	printf("[2] Testing strings \"%s\" and \"%s\"\n", s1, s3);
	while (offset < 10)
	{
		ft_strncmp_test(s1, s3, offset);
		offset++;
	}
	offset = 0;
	printf("[3] Testing strings \"%s\" and \"%s\"\n", s2, s3);
	while (offset < 10)
	{
		ft_strncmp_test(s2, s3, offset);
		offset++;
	}
	return (0);
}