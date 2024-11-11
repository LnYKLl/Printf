/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkiloul <lkiloul@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 15:12:21 by lkiloul           #+#    #+#             */
/*   Updated: 2024/11/04 08:13:19 by lkiloul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static void	ft_format(char c, va_list args)
{
	if (c == 'c')
		ft_putchar((char)va_arg(args, int));
	if (c == 's')
		ft_putstr(va_arg(args, char *));
	if (c == 'd' || c == 'i')
		ft_putnbr(va_arg(args, int));
	if (c == '%')
		ft_putchar('%');
	if (c == 'p')
		ft_adress(va_arg(args, unsigned long));
	if (c == 'x')
		ft_putnbr_hex(va_arg(args, unsigned int), 0);
	if (c == 'X')
		ft_putnbr_hex(va_arg(args, unsigned int), 1);
	if (c == 'u')
		ft_putnbr_unsigned(va_arg(args, unsigned int));
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		i;

	i = 0;
	if (!format)
		return (0);
	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			ft_format(format[i], args);
		}
		else
			write(1, &format[i], 1);
		i++;
	}
	va_end(args);
	return (0);
}
