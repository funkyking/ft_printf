#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

/* Flags and main functions*/
int	ft_printf(const char *format, ...);
int	ft_formats(va_list args, const char *format, int *len);
int ft_print_char(int c);
int	ft_print_str(char *s);
int ft_print_ptr(unsigned long long ptr);
int	ft_print_nbr(int n);
int	ft_print_unsigned(unsigned int n);
int ft_hex_low(unsigned long long n);
int ft_hex_up(unsigned long long n);
int	ft_print_pct(void);

/* Other functions */
void	ft_puts_str(char *s);
void    ft_puts_ptr(uintptr_t n);
int     ft_ptr_scope(uintptr_t n);
int	    ft_num_scope(unsigned int n);

#endif