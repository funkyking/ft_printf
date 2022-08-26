#include "ft_printf.h"
#include "libft/libft.h"

int ft_ptr_scope(uintptr_t n)
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

void    ft_puts_ptr(uintptr_t n)
{
    if (n >= 16)
    {
        ft_puts_ptr(n / 16);
        ft_puts_ptr(n % 16);
    }
    else
    {
        if (n <= 9)
        {
            ft_putchar_fd((n + '0'), 1);
        }
        else
        {
            ft_putchar_fd((n - 10 + 'a'), 1);
        }
    }
}

int ft_print_ptr(unsigned long long ptr)
{
    int len;

    len = 0;
    len += write(1, "0x", 2);
    if (ptr == 0)
    {
        ft_puts_ptr(ptr);
        len += ft_ptr_scope(ptr);
    }
    return (len);
}