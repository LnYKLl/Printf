/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexmin.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkiloul <lkiloul@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 08:10:37 by lkiloul           #+#    #+#             */
/*   Updated: 2024/11/14 14:44:16 by lkiloul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_putnbr_hex(unsigned int n, int uppercase)
{
	int		i;
	char	*hex_digits;

	i = 0;
	if (uppercase)
		hex_digits = "0123456789ABCDEF";
	else
		hex_digits = "0123456789abcdef";
	if (n >= 16)
		i += ft_putnbr_hex(n / 16, uppercase);
	i += ft_putchar(hex_digits[n % 16]);
	return (i);
}
