#include "ft_printf.h"

int	ft_format(va_list args, const char format)
{
	int len;

	len = 0;
	if (format == 'c')
		len += ft_print_char(va_arg(args, int));
	if (format == 's')
		len += ft_print_str(va_arg(args, char *));
	if (format == 'p')
		len += ft_print_ptr(va_arg(args, uintptr_t));
	if (format == 'd' || format == 'i')
		len += ft_print_int(va_arg(args, int));
	if (format == 'u')
		len += ft_print_unsigned(va_arg(args, int));
	if (format == 'x')
		len += ft_print_hex(va_arg(args, unsigned int), LOWER_HEX_BASE);
	if (format == 'X')
		len += ft_print_hex(va_arg(args, unsigned int), UPPER_HEX_BASE);
	if (format == '%')
		len += write(1, "%", 1);
	return (len);
}

int	ft_printf(const char *format, ...)
{
	int		i;
	int		len;
	va_list	args;

	i = 0;
	len = 0;
	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			len += ft_format(args, format[i + 1]);
			i++;
		}
		else
			len += write(1, &format[i], 1);
		i++;
	}	
	va_end(args);
	return (len);
}