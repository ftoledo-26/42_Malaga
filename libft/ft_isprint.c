//Corregido
#include "libft.h"

int ft_isprint(char c)
{
	if (c >= 32)
		return 1;
	else
		return 0;
}