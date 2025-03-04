/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftoledo- <ftoledo@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 20:16:15 by ftoledo-          #+#    #+#             */
/*   Updated: 2024/11/09 20:28:30 by ftoledo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
