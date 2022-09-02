#include "ft_printf.h"
#include "libft/libft.h"

int ft_hex_low(unsigned long long n)
{
    int ret;
    char    *hex;
    
    hex = "0123456789abcdef";
    ret = 0;
    if (n > 15)
        ret += ft_hex_low(n / 16);
    ret += ft_print_char(hex[n % 16]);
    return (ret);
}

int ft_hex_up(unsigned long long n)
{
    int ret;
    char    *hex;
    
    hex = "0123456789ABCDEF";
    ret = 0;
    if (n > 15)
        ret += ft_hex_up(n / 16);
    ret += ft_print_char(hex[n % 16]);
    return (ret);
}