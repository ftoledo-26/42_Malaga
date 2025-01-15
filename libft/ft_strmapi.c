#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		count;
	char	*new_str;
	int		i;

	if (!s || !f)
		return (NULL);
	count = ft_strlen(s);
	new_str = malloc(sizeof(char) * count + 1);
	if (!new_str)
		return (NULL);
	i = 0;
	while (i < count)
	{
		new_str[i] = f(i, s[i]);
		++i;
	}
	new_str[i] = '\0';
	return (new_str);
}