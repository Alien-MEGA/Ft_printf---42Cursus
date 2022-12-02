/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_pos.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reben-ha <reben-ha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 16:56:26 by reben-ha          #+#    #+#             */
/*   Updated: 2022/11/16 13:46:20 by reben-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_pos(unsigned int n)
{
	int	len;

	len = 0;
	if (n >= 10)
	{
		len += ft_putnbr_pos(n / 10);
		len += ft_putnbr_pos(n % 10);
	}
	if (n < 10)
		len += ft_putchar(n + 48);
	return (len);
}
