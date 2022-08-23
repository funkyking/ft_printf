#include "ft_printf.h"

long long int   ft_count_digit(long long num, int base) //It is used to count digits + newer macros
{
	long long int   ret;
	long long int   digit;

	ret = 0;
	digit = num;
	if (digit == 0 || digit < 0)
		ret++;
	while (digit != 0)
	{
			digit /= base;
			ret++;
	}
	return (ret);
}

static void ft_print_long_hex(uintptr_t num)
{
    char    *base;

    base = LOWER_HEX_BASE;
    if (num >= 16)
        ft_print_long_hex(num / 16);
    if (num > 10)
        ft_putchar_fd(base[num % 16], 1);
    else
        ft_putchar_fd(base[num % 16], 1);
}

int ft_print_ptr(uintptr_t num)
{
    char *prefix;

    prefix = "0x";
    if ((void *)num == NULL)
        return (write(1, "0x0", 3));
    ft_putstr_fd(prefix, 1);
    ft_print_long_hex(num);
    return (ft_count_digit(num, 16) + ft_strlen(prefix));
}
