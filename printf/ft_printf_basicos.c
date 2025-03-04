/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_basicos.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftoledo- <ftoledo@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 07:37:55 by ftoledo-          #+#    #+#             */
/*   Updated: 2025/03/04 08:05:55 by ftoledo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printchar(char character)
{
	write(1, &character, 1);
	return (1);
}

int	ft_printstrin(char *str)
{
	int	i;

	i = 0;
	if (str == NULL)
		return (ft_printstrin("(null)"));
	while (str[i])
		i += ft_printchar(str[i]);
	return (i);
}

int	ft_printentero(int num)
{
	int	i;

	i = 0;
	if (num == NULL)
		return (ft_printstrin("(null)"));
	if (num == -2147483648)
	{
		i += ft_printstrin("-2147483648");
		return (i);
	}
	if (num < 0)
	{
		i += ft_printchar('-');
		num = -num;
	}
	if (num > 0)
		i += ft_printunsig((unsigned int)num);
	return (i);
}

int	ft_printunsig(unsigned int num)
{
	int	i;

	i = 0;
	if (num == NULL)
		return (ft_printstrin("(null)"));
	else
	{
		if (num / 10 != 0)
			ft_printchar(num / 10);
		ft_printchar((num % 10) + '0');
		while (num > 0)
		{
			num /= 10;
			i++;
		}
	}
	return (i);
}
