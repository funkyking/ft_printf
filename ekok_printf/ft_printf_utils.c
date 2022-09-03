/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eekokyoong <eekokyoong@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 12:40:38 by eekokyoong        #+#    #+#             */
/*   Updated: 2022/07/19 12:40:39 by eekokyoong       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	put_p(unsigned long long n)
{
	int		ret;
	char	*hex;

	hex = "0123456789abcdef";
	ret = 0;
	if (n > 15)
		ret += put_p(n / 16);
	ret += ft_putchar(hex[n % 16]);
	return (ret);
}

int	put_x_lowercase(unsigned int n)
{
	int		ret;
	char	*hex;

	hex = "0123456789abcdef";
	ret = 0;
	if (n > 15)
		ret += put_x_lowercase(n / 16);
	ret += ft_putchar(hex[n % 16]);
	return (ret);
}

int	put_x_uppercase(unsigned int n)
{
	int		ret;
	char	*hex;

	hex = "0123456789ABCDEF";
	ret = 0;
	if (n > 15)
		ret += put_x_uppercase(n / 16);
	ret += ft_putchar(hex[n % 16]);
	return (ret);
}

int	put_p_with_0x(unsigned long long n)
{
	int	ret;

	ret = 2;
	ft_putstr("0x");
	ret += put_p(n);
	return (ret);
}
