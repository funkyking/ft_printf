#include "ft_printf.h"

long long int	ft_count_digit(long long int n, int base)
{
	long long int	ret;
	long long int	digit;

	ret = 0;
	digit = n;
	if (digit == 0 || digit < 0)
		ret++;
	while (digit != 0)
	{
			digit /= base;
			ret++;
	}
	return (ret);
}

int ft_print_int(int num)
{
    ft_putnbr_fd(num, 1);
    return (ft_count_digit(num, 10));
}