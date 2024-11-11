/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkiloul <lkiloul@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 13:36:31 by lkiloul           #+#    #+#             */
/*   Updated: 2024/11/04 08:07:03 by lkiloul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		ft_putchar(s[i]);
		i++;
	}
}

size_t ft_putnbr(int n)
{
	size_t i;

	i = 0;
	if (n < 0)
	{
		ft_putchar('-');
		i++;
		n = -n;
	}
	if (n >= 10)
	{
		i += ft_putnbr(n / 10);
		i += ft_putnbr(n % 10);
	}
	else
	{
		ft_putchar(n + '0');
		i++;
	}
	return (i);
}

void ft_adress(unsigned long n)
{
	char	*base;

	base = "0123456789abcdef";
	if (n >= 16)
	{
		ft_adress(n / 16);
		ft_adress(n % 16);
	}
	else
		ft_putchar(base[n]);

}

void	ft_putnbr_unsigned(unsigned int n)
{
    if (n >= 10)
        ft_putnbr_unsigned(n / 10);
    ft_putchar((n % 10) + '0');
}
