//Corregido
#include "libft.h"

void ft_bzero(void *s, unsigned int n) 
{
unsigned char	*p;

	*p = (unsigned char *)s;
	while (n > 0) 
	{
		*p++ = 0;
		n--;
	}
}