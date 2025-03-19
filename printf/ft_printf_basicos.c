/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_basicos.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftoledo- <ftoledo@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 07:37:55 by ftoledo-          #+#    #+#             */
/*   Updated: 2025/03/04 09:19:06 by ftoledo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_string(char *str)
{
	int	size;

	size = 0;
	if (str == 0)
	{
		return (print_string("(null)"));
	}
	while (str[size])
	{
		size += ft_print_char(str[size]);
	}
	return (size);
}

int	print_numero(int n)
{
	int	size;

	size = 0;
	if (n == 0)
		size += ft_print_char('0');
	if (n == -2147483648)
	{
		size += print_string("-2147483648");
		return (size);
	}
	if (n < 0)
	{
		size += ft_print_char('-');
		n = -n;
	}
	if (n > 0)
		size += print_uns((unsigned int)n);
	return (size);
}


int	print_uns(unsigned int n)
{
	int	size;

	size = 0;
	if (n == 0)
		size += ft_print_char('0');
	else
	{
		if (n / 10 != 0)
			print_uns(n / 10);
		ft_print_char((n % 10) + '0');
		while (n > 0)
		{
			n /= 10;
			size++;
		}
	}
	return (size);
}
