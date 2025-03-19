/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftoledo- <ftoledo@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 08:24:51 by ftoledo-          #+#    #+#             */
/*   Updated: 2025/03/04 09:14:32 by ftoledo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int	ft_print_char(int character);
int	ft_printf(const char *str, ...);
int	print_string(char *str);
int	print_numero(int n);
int	print_uns(unsigned int n);
int	ft_print_hex(unsigned int num, const char word);
int	ft_print_ptr(unsigned long long ptr);

#endif