/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkiloul <lkiloul@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 13:36:31 by lkiloul           #+#    #+#             */
/*   Updated: 2024/11/11 16:36:38 by lkiloul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_putstr(char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		ft_putchar(s[i]);
		i++;
	}
	return (i + 1);
}

size_t ft_putnbr(int n, int count)
{
	size_t i;

	i = 0;
	if (n < 0)
	{
		count += ft_putchar('-');
		i++;
		n = -n;
	}
	if (n >= 10)
	{
		i += ft_putnbr(n / 10, count);
		i += ft_putnbr(n % 10, count);
	}
	else
	{
		ft_putchar(n + '0');
		i++;
	}
	return (i);
}

int ft_address(unsigned long n, int addprefix, int count)
{
    char	*base;
    size_t	i;

    base = "0123456789abcdef";
    i = 0;
    if (addprefix)
    {
        count += ft_putstr("0x");
        i += 2;
    }
    if (n == 0)
    {
        count += ft_putchar('0');
        i++;
    }
    else
    {
        if (n >= 16)
        {
            i += ft_address(n / 16, 0, count);
        }
        count += ft_putchar(base[n % 16]);
        i++;
    }
    return (count);
}

void	ft_putnbr_unsigned(unsigned int n)
{
    if (n >= 10)
        ft_putnbr_unsigned(n / 10);
    ft_putchar((n % 10) + '0');
}
