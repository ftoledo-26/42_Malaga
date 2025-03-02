#ifndef FT_PRINTF_H
# define FT_PRINTF_H
#include <strdarg.h>
#include <unistd.h>

int	ft_printf(const char *str, ...);
static int	ft_select_format(va_list argument, const char word);
int	ft_print_character(int character);

#endif
