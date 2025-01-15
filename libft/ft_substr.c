/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftoledo- <ftoledo@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 20:25:23 by ftoledo-          #+#    #+#             */
/*   Updated: 2024/11/09 22:21:55 by ftoledo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *str, unsigned int star, size_t len)
{
	char	*sub;
	size_t	s_len;

	s_len = ft_strlen((char *)str);
	if (star >= s_len)
		return (ft_strdup(""));
	str += star;
	s_len = ft_strlen((char *)str);
	if (len > s_len)
		len = s_len;
	sub = ft_calloc(len + 1, sizeof(char));
	if (!sub)
		return (NULL);
	ft_strlcpy(sub, str, len + 1);
	return (sub);
}
