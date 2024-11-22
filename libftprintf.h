/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkiloul <lkiloul@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 16:07:48 by lkiloul           #+#    #+#             */
/*   Updated: 2024/11/20 13:37:18 by lkiloul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

int		ft_printf(const char *format, ...);
int		ft_putchar(char c);
int		ft_putstr(char *s);
size_t	ft_putnbr(int n);
int		ft_address(unsigned long n, int addprefix, int count);
int		ft_putnbr_unsigned(unsigned int n);
int		ft_putnbr_hex(unsigned int n, int uppercase);

#endif