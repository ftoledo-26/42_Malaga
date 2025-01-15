//Corregido
#include "libft.h"

void	*ft_calloc(size_t num_elem, size_t size)
{
	void	*result;

	result = malloc(num_elem * size);
	if (!result)
		return ("\0");
	else
	{
		ft_bzero(result, (num_elem * size));
		return (result);
	}
}