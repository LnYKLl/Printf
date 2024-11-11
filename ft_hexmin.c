/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexmin.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkiloul <lkiloul@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 08:10:37 by lkiloul           #+#    #+#             */
/*   Updated: 2024/11/04 08:14:13 by lkiloul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_putnbr_hex(unsigned int n, int uppercase)
{
    char *hex_digits;

    if (uppercase)
        hex_digits = "0123456789ABCDEF";
    else
        hex_digits = "0123456789abcdef";

    if (n >= 16)
        ft_putnbr_hex(n / 16, uppercase);
    ft_putchar(hex_digits[n % 16]);
}