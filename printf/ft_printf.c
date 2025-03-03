/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftoledo- <ftoledo@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/02 08:05:15 by ftoledo-          #+#    #+#             */
/*   Updated: 2025/03/04 09:14:54 by ftoledo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printchar(char character)
{
	write(1, &character, 1);
	return (1);
}

int	ft_printf(const char *str, ...)
{
	int		i;
	int		size;
	va_list	argument;

	i = 0;
	size = 0;
	va_start(argument, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			size += ft_select_format(argument, str[i + 1]);
			i++;
		}
		else
		{
			size += ft_printchar(str[i]);
			i++;
		}
	}
	va_end(argument);
	return (size);
}

int	ft_select_format(va_list argument, const char word)
{
	int	size;

	size = 0;
	if (word == 'c')
		size += ft_printchar(va_arg(argument, int));
	else if (word == 's')
		size += ft_printstrin(va_arg(argument, char *));
	else if (word == 'p')
		size += ft_printentero(va_arg(argument, unsigned long long));
	else if (word == 'd' || word == 'i')
		size += ft_printentero(va_arg(argument, int));
	else if (word == 'u')
		size += ft_printunsig(va_arg(argument, unsigned int));
	else if (word == 'x' || word == 'X')
		size += ft_print_hexa(va_arg(argument, unsigned int), word);
	else
		size += ft_printchar(word);
	return (size);
}
