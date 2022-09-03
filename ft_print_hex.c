#include "ft_printf.h"
#include "libft/libft.h"

int	ft_hex_lowercase(unsigned long long n)
{
	int		ret;
	char	*hex;

	hex = "0123456789abcdef";
	ret = 0;
	if (n > 15)
		ret += ft_hex_lowercase(n / 16);
	ret += ft_printchar(hex[n % 16]);
	return (ret);
}

int	ft_hex_uppercase(unsigned long long n)
{
	int		ret;
	char	*hex;

	hex = "0123456789ABCDEF";
	ret = 0;
	if (n > 15)
		ret += ft_hex_uppercase(n / 16);
	ret += ft_printchar(hex[n % 16]);
	return (ret);
}