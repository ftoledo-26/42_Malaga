/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_punteros.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftoledo- <ftoledo@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/02 08:05:07 by ftoledo-          #+#    #+#             */
/*   Updated: 2025/03/04 09:18:32 by ftoledo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_len_ptr(unsigned long long ptr);

static void	ft_search_prt(unsigned long long ptr);

int	ft_print_ptr(unsigned long long ptr)
{
	int	size;

	size = 0;
	size += print_string("0x");
	if (ptr == 0)
		size += ft_print_char('0');
	else
	{
		ft_search_prt(ptr);
		size += ft_len_ptr(ptr);
	}
	return (size);
}

static int	ft_len_ptr(unsigned long long ptr)
{
	int	len;

	len = 0;
	while (ptr > 0)
	{
		len++;
		ptr /= 16;
	}
	return (len);
}

static void	ft_search_prt(unsigned long long ptr)
{
	if (ptr >= 16)
	{
		ft_search_prt(ptr / 16);
		ft_search_prt(ptr % 16);
	}
	else
	{
		if (ptr < 10)
			ft_print_char(ptr + '0');
		else
			ft_print_char(ptr - 10 + 'a');
	}
}