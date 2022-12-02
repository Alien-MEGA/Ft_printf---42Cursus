/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_hex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reben-ha <reben-ha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 17:57:38 by reben-ha          #+#    #+#             */
/*   Updated: 2022/11/16 15:32:58 by reben-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_hex(unsigned int n, int Ul)
{
	int	len;

	len = 0;
	if (n >= 16)
	{
		len += ft_putnbr_hex(n / 16, Ul);
		len += ft_putnbr_hex(n % 16, Ul);
	}
	if (n < 10)
		len += ft_putchar(n + 48);
	else if (n >= 10 && n <= 15)
	{
		if (Ul == 0)
			len += ft_putchar(n + 87);
		if (Ul == 1)
			len += ft_putchar(n + 55);
	}
	return (len);
}
