#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

/* Flags and main functions*/
int	ft_printf(const char *format, ...);
//static void ft_formats(va_list args, const char *format, int *len);
int ft_print_char(int c);
int	ft_print_str(char *s);
int ft_print_ptr(unsigned long long n);
int	ft_print_nbr(int n);
int	ft_print_unsigned(unsigned int n);
int ft_hex_low(unsigned long long n);
int ft_hex_up(unsigned long long n);
int	ft_print_pct(void);

/* Other functions */
int ft_puts_ptr(unsigned long long n);

#endif