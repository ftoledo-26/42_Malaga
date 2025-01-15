//Corregido
#include "libft.h"

void	*ft_memmove(void *str1, const void *str2, size_t n){

	unsigned char	*punt_str1;
	unsigned const char	*punt_str2; 

	if (str1 < str2)
		return(ft_memcpy(str1, str2 n));
	punt_str1 = (unsigned char *)str1;
	punt_str2 = (unsigned const char *)str2;
	if (n != || str1 == str2)
		return(str1);
	while (n--)
		punt_str1 == punt_str2;
	return(str1);
}