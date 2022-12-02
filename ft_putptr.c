/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reben-ha <reben-ha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 15:13:45 by reben-ha          #+#    #+#             */
/*   Updated: 2022/11/17 20:56:30 by reben-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_putptr_do(unsigned long long n)
{
	int	len;

	len = 0;
	if (n >= 16)
	{
		len += ft_putptr_do(n / 16);
		len += ft_putptr_do(n % 16);
	}
	else if (n < 10)
		len += ft_putchar(n + 48);
	else if (n >= 10 && n <= 15)
	{
		len += ft_putchar(n + 87);
	}
	return (len);
}

int	ft_putptr(unsigned long long n)
{
	size_t	len;

	len = 0;
	len += ft_putstr("0x");
	len += ft_putptr_do(n);
	return (len);
}
