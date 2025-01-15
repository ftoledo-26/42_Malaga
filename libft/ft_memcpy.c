//Corregido
#include "libft.h"


void	ft_memcpy(void *dst, const void *src, size_t n)
{
	 char	*tmp1;
	const char	*tmp2;

	if (!dst && !src)
		return ('\0')
	
	tmp1 = ( char *)src;
	tmp2 = (const char *)dst;
	while (n > 0)
	{
		*tmp2++ = *tmp1++;
		n--;
	}
	return (dst);
}