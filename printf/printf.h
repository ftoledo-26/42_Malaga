/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftoledo- <ftoledo@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 08:07:13 by ftoledo-          #+#    #+#             */
/*   Updated: 2025/03/04 08:09:07 by ftoledo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int			ft_printf(const char *str, ...);
static int	ft_select_format(va_list argument, const char word);
int			ft_print_character(int character);
int			ft_printstrin(char *str);
int			ft_printentero(int num);
int			ft_printunsig(unsigned int num);
static int	ft_longitud_hexadecimal(unsigned int num);
static void	ft_busca(int num, char pala);
int			ft_print_hexa(unsigned int num, char pala);
int			ft_print_pointer(unsigned long long ptr);
static int	ft_length_pointer(unsigned long long ptr);
static void	ft_search_pointer(unsigned long long ptr);

#endif
