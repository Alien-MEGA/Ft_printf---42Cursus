/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reben-ha <reben-ha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 12:05:19 by reben-ha          #+#    #+#             */
/*   Updated: 2022/11/16 15:37:39 by reben-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>

int		ft_printf(const char *str, ...);
int		ft_putchar(char c);
int		ft_strlen(const char *str);
int		ft_putstr(char *s);
int		ft_putnbr(int n);
int		ft_putnbr_pos(unsigned int n);
int		ft_putnbr_hex(unsigned int n, int Ul);
int		ft_putptr(unsigned long long n);

#endif