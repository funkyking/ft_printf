#include "libft.h"

int ft_putstr(const char *str)
{
    int len;
    int ret;

    ret = ft_strlen(str)
    len = 0;
    while (str[len])
    {
        ft_print_char(str[len]);
        len++;
    }
}