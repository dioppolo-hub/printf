/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexprint.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dioppolo <dioppolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/03 00:00:00 by auto              #+#    #+#             */
/*   Updated: 2026/01/07 12:13:48 by dioppolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_hex(va_list ap)
{
	unsigned int	n;
	int				i;
	int				res;
	char			buf[32];
	char			*hex;

	hex = "0123456789abcdef";
	n = va_arg(ap, int);
	res = 0;
	i = 0;
	if (n == 0)
	{
		write(1, "0", 1);
		return (1);
	}
	while (n > 0)
	{
		res = n % 16;
		buf[i++] = hex[res];
		n = n / 16;
	}
	res = i;
	while (i-- >= 1)
		write(1, &buf[i], 1);
	return (res);
}

int	print_uphex(va_list ap)
{
	unsigned int	n;
	int				i;
	int				res;
	char			buf[32];
	char			*hex;

	hex = "0123456789ABCDEF";
	n = va_arg(ap, int);
	res = 0;
	i = 0;
	if (n == 0)
	{
		write(1, "0", 1);
		return (1);
	}
	while (n > 0)
	{
		res = n % 16;
		buf[i++] = hex[res];
		n = n / 16;
	}
	res = i;
	while (i-- >= 1)
		write(1, &buf[i], 1);
	return (res);
}

int	print_hexptr(unsigned long long ptr)
{
	int					i;
	unsigned long long	res;
	char				buf[32];
	char				*base;

	base = "0123456789abcdef";
	i = 0;
	res = 0;
	while (ptr > 0)
	{
		res = ptr % 16;
		buf[i++] = base[res];
		ptr = ptr / 16;
	}
	res = i;
	while (i-- >= 1)
		write(1, &buf[i], 1);
	return (res);
}

int	print_ptr(va_list ap)
{
	unsigned long long	ptr;
	int					i;

	ptr = va_arg(ap, unsigned long long);
	if (ptr == 0)
	{
		write(1, "(nil)", 5);
		return (5);
	}
	write(1, "0x", 2);
	i = print_hexptr(ptr);
	return (i + 2);
}
