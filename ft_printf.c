#include "ft_printf.h"
#include "libft/libft.h"

static void	ft_format(va_list args, const char *format, int *ret)
{
	while (*format)
	{
		if (format[0] == '%' && format[1] != '\0')
		{
			if (format[1] == 'c')
				*ret += ft_printchar(va_arg(args, int));
			else if (format[1] == 's')
				*ret += ft_print_str(va_arg(args, char *));
			else if (format[1] == 'd' || format[1] == 'i')
				*ret += ft_print_nbr(va_arg(args, int));
			else if (format[1] == 'u')
				*ret += ft_print_unsigned(va_arg(args, unsigned int));
			else if (format[1] == 'p')
				*ret += ft_print_ptr(va_arg(args, unsigned long long));
			else if (format[1] == 'x')
				*ret += ft_hex_lowercase(va_arg(args, unsigned long long));
			else if (format[1] == 'X')
				*ret += ft_hex_uppercase(va_arg(args, unsigned long long));
			else if (format[1] == '%')
				*ret += ft_printchar('%');
			format += 2;
		}
		else
			*ret += ft_printchar(*format++);
	}
}

int	ft_printf(const char *format, ...)
{
	int		i;
	va_list	args;

	i = 0;
	va_start(args, format);
	ft_format(args, format, &i);
	va_end(args);
	return (i);
}
