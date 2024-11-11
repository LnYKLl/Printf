/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkiloul <lkiloul@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 16:07:48 by lkiloul           #+#    #+#             */
/*   Updated: 2024/11/11 16:36:47 by lkiloul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

int		ft_printf(const char *format, ...);
int	ft_putchar(char c);
int	ft_putstr(char *s);
size_t  ft_putnbr(int n, int count);
int  ft_address(unsigned long n, int addprefix, int count);
void	ft_putnbr_unsigned(unsigned int n);
void	ft_putnbr_hex(unsigned int n, int uppercase);

#endif