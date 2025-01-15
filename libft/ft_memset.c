//Corregido
#include "libft.h"

void	ft_memset(void *ptr, int value, unsigned int num) 
{
	unsigned char	*p;
	unsigned char	val;
	unsigned int	i;

	i = 0;
	val = (unsigned char)value;
	*p = (unsigned char *)ptr;
	while (i < num) 
	{
		p[i] = val;
		i++;
	}
    return (ptr);
}