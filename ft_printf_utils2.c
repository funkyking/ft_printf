/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eekokyoong <eekokyoong@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 12:40:32 by eekokyoong        #+#    #+#             */
/*   Updated: 2022/07/19 12:40:34 by eekokyoong       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	if (s == NULL)
		return (0);
	while (s[i] != '\0')
		i++;
	return (i);
}

int	ft_putchar(int c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_putstr(const char *s)
{
	int	ret;
	int	i;

	ret = ft_strlen(s);
	i = 0;
	if (!s)
	{
		ret += ft_putstr("(null)");
		return (ret);
	}
	write(1, s, ret);
	return (ret);
}

int	ft_put_int(int n)
{
	int	ret;

	ret = 0;
	if (n < 0)
	{
		if (n == -2147483648)
		{
			ret += ft_putstr("-2147483648");
			return (ret);
		}
		ft_putchar('-');
		ret++;
		n = -n;
	}
	if (n > 9)
		ret += ft_put_int(n / 10);
	ret += ft_putchar(n % 10 + '0');
	return (ret);
}

int	ft_put_unsigned_int(unsigned int n)
{
	int	ret;

	ret = 0;
	if (n > 9)
		ret += ft_put_unsigned_int(n / 10);
	ret += ft_putchar(n % 10 + '0');
	return (ret);
}
