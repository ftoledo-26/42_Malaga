/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftoledo- <ftoledo@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 20:06:49 by ftoledo-          #+#    #+#             */
/*   Updated: 2024/11/11 09:53:50 by ftoledo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *str1, const void *str2, size_t n)
{
	unsigned char			*punt_str1;
	const unsigned char		*punt_str2;

	punt_str1 = (unsigned char *)str1;
	punt_str2 = (unsigned char *)str2;
	if (str1 == str2 || n == 0)
		return (str1);
	if (str1 < str2)
	{
		while (n--)
			*punt_str1++ = *punt_str2++;
	}
	else
	{
		punt_str1 += n;
		punt_str2 += n;
		while (n--)
			*(--punt_str1) = *(--punt_str2);
	}
	return (str1);
}
