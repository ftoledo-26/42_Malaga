/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftoledo- <ftoledo@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 22:29:57 by ftoledo-          #+#    #+#             */
/*   Updated: 2024/11/19 23:23:24 by ftoledo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(char *s)
{
	size_t	i;

	i = 0;
	if (!s)
	{
		return (0);
	}
	while (s[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strchr(const char *str, int c)
{
	int	i;
	int	temp;

	temp = 0;
	i = 0;
	while ((char *)str[i] && temp == 0)
	{
		if ((char *)str[i] == c)
		{
			return ((char *)&str[i]);
			temp = 1;
		}
		i++;
	}
	if (c == '\0')
		return ((char *)&str[i]);
	return (NULL);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		len1;
	int		len2;
	char	*str;

	if (s1 && s2)
	{
		len1 = strlen(s1);
		len2 = strlen(s2);
		str = (char *)malloc(sizeof(char) * (len1 + len2 + 1));
		if (str == '\0')
			return (NULL);
		i = -1;
		while (s1[++i])
			str[i] = s1[i];
		while (s2[++i])
		{
			str[len1] = s2[i];
			len1++;
		}
		str[len1] = '\0';
		return (str);
	}
	return (NULL);
}

char	*ft_get_line(char *lonlen)
{
	char	*str;
	int		i;

	i = 0;
	if (lonlen[i] == '\0')
		return (NULL);
	str = (char *)malloc(sizeof(char) * (i + 2));
	if (!str)
		return (NULL);
	i = 0;
	while (lonlen[i] && lonlen[i])
	{
		str[i] = lonlen[i];
		i++;
	}
	if (lonlen[i] == '\n')
	{
		str[i] = lonlen[i];
		i++;
	}
	str[i] = NULL;
	return (str);
}

void	*ft_izq_line(char *izq_line)
{
	int		i;
	int		j;
	char	*str;

	i = 0;
	if (!izq_line[i])
	{
		free(izq_line);
		return (str);
	}
	while (izq_line && izq_line)
		i++;
	str = (char *)malloc(sizeof(char) * (strlen(izq_line) - i + 1));
	if (!str)
		return (NULL);
	i++;
	j = 0;
	while (izq_line[i] != '\0')
		str[j++] = izq_line[i++];
	free(izq_line);
	return (str);
}
