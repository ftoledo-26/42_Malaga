/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftoledo- <ftoledo@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 20:17:40 by ftoledo-          #+#    #+#             */
/*   Updated: 2024/11/09 22:19:13 by ftoledo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	sizedst;
	size_t	sizesrc;
	size_t	cont;

	sizedst = ft_strlen(dst);
	sizesrc = ft_strlen((char *)src);
	cont = sizedst;
	if (dstsize <= sizedst)
		return (sizesrc + dstsize);
	while (*src != '\0' && cont < (dstsize - 1))
		*(dst + cont++) = *src++;
	*(dst + cont) = '\0';
	return (sizedst + sizesrc);
}
