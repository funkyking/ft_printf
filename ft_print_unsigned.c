#include "ft_printf.h"
#include "libft/libft.h"
#include <stdlib.h>

int	ft_num_scope(unsigned int n)
{
	int	len;

	len = 0;
	while (n != 0)
	{
		len++;
		n = n / 10;
	}
	return (len);
}

int	ft_print_unsigned(unsigned int n)
{
	int		len;
	char	*num;

	len = 0;
	if (n == 0)
		len += write(1, "0", 1);
	else
	{
		num = ft_uitoa(n);
		len += ft_print_str(num);
		free(num);
	}
	return (len);
}