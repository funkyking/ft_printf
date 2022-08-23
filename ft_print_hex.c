#include "ft_printf.h"

long long int	ft_count_digit(long long int num, int base)
{
	long long int	ret;
	long long int	digit;

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

int	ft_print_hex(unsigned int num, const char *base)
{
    if (num >= 16)
        ft_print_hex(num / 16, base);
    if (num > 10)
        ft_putchar_fd(base[num % 16], 1);
    else
        ft_putchar_fd(base[num % 16], 1);
    return (ft_count_digit(num, 16));
}