#include "libft.h"
char	*ft_strchr(const char *str, int c)
{
	int	i;
	int	temp;

	temp = 0;
	i = 0;
	while (((char*)str)[i] != '\0' && temp == 0)
	{
		if (((char*)str)[i] == c)
		{
			return ((char*)&str[i]);
			temp = 1;
		}
		i++;
	}
	if (c == '\0')
		return ((char*)&str[i]);
	return ('\0');
}