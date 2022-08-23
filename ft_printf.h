#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft/libft.h"
# include <stdarg.h>
# include <unistd.h>

# define LOWER_HEX_BASE "0123456789abcdef"
# define UPPER_HEX_BASE "0123456789ABCDEF"

int	ft_printf(const char *format, ...);
int	ft_print_char(char c);
int	ft_print_str(char *str);
int	ft_print_ptr(uintptr_t num);
int	ft_print_int(int num);
int	ft_print_unsigned(unsigned int num);
int	ft_print_hex(unsigned int num, const char *base);

#endif