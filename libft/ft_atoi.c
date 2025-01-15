//Corregido
#include "libft.h"

int	ft_atoi(char *str)
{
	int	i;
	int	negative;
	int	numb;

	i = 0;
	negative = 1;
	numb = 0;
	while ((str[i] >= 9 && str[i] <= 13) || (str[i] == ' '))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
		{
			negative = negative * -1;
		}
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		numb = (numb * 10) + (str[i] - '0');
		i++;
	}
	return (numb * negative);
}