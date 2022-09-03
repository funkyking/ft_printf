/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eekokyoong <eekokyoong@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 12:42:57 by eekokyoong        #+#    #+#             */
/*   Updated: 2022/07/19 12:42:58 by eekokyoong       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <unistd.h>

size_t	ft_strlen(const char *s);
int		ft_putchar(int c);
int		ft_putstr(const char *s);
int		ft_put_int(int n);
int		ft_put_unsigned_int(unsigned int n);
int		put_x_lowercase(unsigned int n);
int		put_x_uppercase(unsigned int n);
int		put_p(unsigned long long n);
int		put_p_with_0x(unsigned long long n);
int		ft_printf(const char *format, ...);

#endif
