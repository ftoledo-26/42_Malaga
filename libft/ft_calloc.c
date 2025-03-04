/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftoledo- <ftoledo@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 19:54:10 by ftoledo-          #+#    #+#             */
/*   Updated: 2024/11/10 00:52:12 by ftoledo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t num_elem, size_t size)
{
	void	*result;

	if (size != 0 && num_elem > __SIZE_MAX__ / size)
		return (NULL);
	result = malloc(num_elem * size);
	if (!result)
		return (NULL);
	else
	{
		ft_bzero(result, (num_elem * size));
		return (result);
	}
}
