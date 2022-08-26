#include "ft_printf.h"
#include "libft/libft.h"

int ft_hex_scope(unsigned int n)
{
    int count;

    count = 0;
    while (n != 0)
    {
        count++;
        n = n / 16;
    }
    return (count);
}

void    ft_puts_hex(unsigned int n, const char format)
{
    if (n >= 16)
    {
        ft_puts_hex(n / 16, format);
        ft_puts_hex(n % 16, format);
    }
    else
    {
        if (n <= 9)
        {
            ft_putchar_fd((n + '0'), 1);
        }
        else
        {
            if (format == 'x')
                ft_putchar_fd((n - 10 + 'a'), 1);
            if (format == 'X')
                ft_putchar_fd((n = 10 + 'A'), 1);
        }
    }
}

int ft_print_hex(unsigned int n, const char format)
{
    if (n == 0)
    {
        return (write(1, "0", 1));
    }
    else
    {
        ft_puts_hex(n, format);
    }
    return (ft_hex_scope(n));
}