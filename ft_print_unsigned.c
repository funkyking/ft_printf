#include "ft_printf.h"

static void	ft_put_unsigned_nbr_fd(unsigned int n, int fd);

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

int	ft_print_unsigned_int(unsigned int n)
{
	ft_put_unsigned_nbr_fd(n, 1);
	return (ft_count_digit(n, 10));
}

void	ft_put_unsigned_nbr_fd(unsigned int n, int fd)
{
	if (fd < 0)
		return ;
	if (n > 9)
		ft_put_unsigned_nbr_fd(n / 10, fd);
	ft_putchar_fd(n % 10 + 48, fd);
}