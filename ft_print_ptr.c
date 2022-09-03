#include "ft_printf.h"
#include "libft/libft.h"

int ft_puts_ptr(unsigned long long n)
{
    int len;
    char    *hex;

    hex = "0123456789abcdef";
    len = 0;
    if (n > 15)
    {
        len += ft_puts_ptr(n / 16);
    }
    len += ft_printchar(hex[n % 16]);
    return (len);
}

int ft_print_ptr(unsigned long long n)
{
    int len;

    len = 2;
    ft_putstr("0x");
    len += ft_puts_ptr(n);
    return (len);
}