/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reben-ha <reben-ha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 12:04:48 by reben-ha          #+#    #+#             */
/*   Updated: 2022/11/17 20:35:17 by reben-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_han(char han, va_list arg)
{
	int		len;

	len = 0;
	if (han == 'c')
		len += ft_putchar(va_arg(arg, int));
	else if (han == 's')
		len += ft_putstr(va_arg(arg, char *));
	else if ((han == 'd') || (han == 'i'))
		len += ft_putnbr(va_arg(arg, int));
	else if (han == 'u')
		len += ft_putnbr_pos(va_arg(arg, unsigned int));
	else if (han == 'x')
		len += ft_putnbr_hex(va_arg(arg, unsigned int), 0);
	else if (han == 'X')
		len += ft_putnbr_hex(va_arg(arg, unsigned int), 1);
	else if (han == 'p')
		len += ft_putptr(va_arg(arg, unsigned long long));
	else if (han == '%')
		len += ft_putchar('%');
	else
		len += ft_putchar(han);
	return (len);
}

int	ft_printf(const char *str, ...)
{
	va_list	arg;
	size_t	i;
	size_t	len;

	i = 0;
	len = 0;
	va_start(arg, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			if (str[i + 1] == '\0')
				return (len);
			len += ft_han(str[i + 1], arg);
			i++;
		}
		else
			len += ft_putchar(str[i]);
		i++;
	}
	return (len);
	va_end(arg);
}
