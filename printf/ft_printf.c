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

static int	ft_format(va_list argument, const char word);

int	ft_print_char(int character)
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
			size += ft_format(argument, str[i + 1]);
			i++;
		}
		else
		size += ft_print_char(str[i]);
		i++;
	}
	va_end(argument);
	return (size);
}

static int	ft_format(va_list argument, const char word)
{
	int	size;

	size = 0;
	if (word == 'c')
		size += ft_print_char(va_arg(argument, int));
	else if (word == 's')
		size += print_string(va_arg(argument, char *));
	else if (word == 'p')
		size += ft_print_ptr(va_arg(argument, unsigned long long));
	else if (word == 'd' || word == 'i')
		size += print_numero(va_arg(argument, int));
	else if (word == 'u')
		size += print_uns(va_arg(argument, unsigned int));
	else if (word == 'x' || word == 'X')
		size += ft_print_hex(va_arg(argument, unsigned int), word);
	else
		size += ft_print_char(word);
	return (size);
}
