/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftoledo- <ftoledo@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 20:09:35 by ftoledo-          #+#    #+#             */
/*   Updated: 2024/11/09 22:17:41 by ftoledo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *ptr, int value, unsigned int num)
{
	unsigned char	*p;
	unsigned char	val;
	unsigned int	i;

	i = 0;
	val = (unsigned char)value;
	p = (unsigned char *)ptr;
	while (i < num)
	{
		p[i] = val;
		i++;
	}
	return (ptr);
}
