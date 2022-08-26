#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

/*Main function*/
int		ft_printf(const char *format, ...);

/*format of said flags*/
int     ft_formats(va_list args, const char format);

/*Spin off write() [call function]*/
int		ft_print_char(int c);

/*String flag*/
int		ft_print_str(char *s);

/*Pointer flag*/
int		ft_print_ptr(unsigned long long ptr);

/*Number flag*/
int		ft_print_nbr(int n);

/*Unsigned int values flag*/
int		ft_print_unsigned(unsigned int n);

/*Hexadecial value flags*/
int		ft_print_hex(unsigned int n, const char format);

/*prints the percent(%)*/
int		ft_print_pct(void);

/*
Functions for determing the length and iterations.
*/
void	ft_puts_str(char *s);

void	ft_puts_ptr(uintptr_t n);
int		ft_ptr_scope(uintptr_t n);

char	*ft_uitoa(unsigned int	n);
int		ft_num_scope(unsigned int   n);

void	ft_puts_hex(unsigned int n, const char format);
int		ft_hex_scope(unsigned int n);

#endif