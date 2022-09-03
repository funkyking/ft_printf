#include "ft_printf.h"

static void	ft_formats(va_list args, const char *format, int *len)
{
	while (*format)
	{
		if ((format[0] == '%') && (format[1] != '\0'))
		{
			if (format[1] == 'c')
				*len += ft_printchar(va_arg(args, int));
			else if (format[1] == 's')
				*len += ft_print_str(va_arg(args, char *));
			else if (format[1] == 'p')
				*len += ft_print_ptr(va_arg(args, unsigned long long));
			else if ((format[1] == 'd') || (format[1] == 'i'))
				*len += ft_print_nbr(va_arg(args, int));
			else if (format[1] == 'u')
				*len += ft_print_unsigned(va_arg(args, unsigned int));
			else if (format[1] == 'x')
				*len += ft_hex_lowercase(va_arg(args, unsigned long long));
			else if (format[1] == 'X')
				*len += ft_hex_uppercase(va_arg(args, unsigned long long));
			else if (format[1] == '%')
				*len += ft_print_pct();
			format += 2;
		}
		else
			*len += ft_printchar(*format++);
	}
}

int	ft_printf(const char *format, ...)
{
	int i;
	va_list	args;

	i = 0;
	va_start(args, format);
	ft_formats(args, format, &i);
	va_end(args);
	return (i);
}
