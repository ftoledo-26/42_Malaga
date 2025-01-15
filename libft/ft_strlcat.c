#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	sizedst;
	size_t	sizesrc;
	size_t	cont;

	sizedst = ft_strlen(dst);
	sizesrc = ft_strlen(src);
    cont = sizedst;
	if (dstsize <= sizedst)
		return (sizesrc + dstsize);
	while (*src != '\0' && cont < (dstsize - 1))
		*(dst + cont++) = *src++;
	*(dst + cont) = '\0';
	return (sizedst + sizesrc);
}
