#include "ft_printf.h"
#include "libft/libft.h"

int ft_printchar(int c)
{
    write(1, &c, 1);
    return (1);
}