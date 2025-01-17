#include "ft_printf.h"
static int ft_longitud_hexadecimal(unsigned int num)
{
int     len;

len = 0;
while (num != 0)
{
    len++;
    num = num /16;
}
}
static void     ft_busca(int num, char pala)
{
    if (num >= 16)
    {
        ft_busca(num/16, pala);
        ft_busca(num%16, pala);
    }
    else
    {
        if (num < 10)
            ft_print_hexa(num + '0');
    }   
}

int     ft_print_hexa(unsigned int num, char pala)
{
    if (num == 0)
        return (ft_printchar('0'));
    else
        ft_busca(num, pala);
    return(ft_longitud_hexadecimal(num));
}
