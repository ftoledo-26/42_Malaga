//Corregido
#include "libft.h"

int	ft_strncmp(const char *str, const char *str2, size_t c)
{
	size_t			i;
	unsigned int	temp;

	temp = 0;
	i = 0;
	while ((str[i] != '\0') && (str2[i] != '\0')
		&& (temp == 0) && (i < c))
	{
		temp = (unsigned char)str[i] - (unsigned char)str2[i];
		i++;
	}
	if ((temp == 0) && (i < c))
		temp = (unsigned char)str[i] - (unsigned char)str2[i];
	return (temp);
}

int main()
{
    const char str[] = "HolA";
    const char str2[] = "Hola";

    printf("%d", ft_strncmp(str, str2, 4));
    if (ft_strncmp < 0)
        printf("str2 es mayor"); 
    
}