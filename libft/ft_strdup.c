/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftoledo- <ftoledo@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 20:19:26 by ftoledo-          #+#    #+#             */
/*   Updated: 2024/11/09 22:20:31 by ftoledo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	len;
	char	*cpy;

	len = ft_strlen((char *)s) + 1;
	cpy = ft_calloc(len, sizeof(char));
	if (!cpy)
		return (NULL);
	return (ft_memcpy(cpy, s, len));
}
