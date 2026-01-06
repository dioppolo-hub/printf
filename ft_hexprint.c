/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auto <auto@local>                           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/03 00:00:00 by auto              #+#    #+#             */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	print_hex(va_list ap)
{
	unsigned int	n;
	int				i;
	int				res;
	char			hex[] = "0123456789abcdef";
	char			buf[32];

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
	while (i-- >= 0)
		write(1, &buf[i], 1);
	return (res);
}

int	print_HEX(va_list ap)
{
	unsigned int	n;
	int				i;
	int				res;
	char			hex[] = "0123456789ABCDEF";
	char			buf[32];

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
	while (i-- >= 0)
		write(1, &buf[i], 1);
	return (res);
}

int	print_hexptr(uintptr_t n)
{
	char	base[] = "0123456789abcdef";
	int		i;
	int		res;
	char	buf[32];

	i = 0;
	res = 0;
	while (n > 0)
	{
		res = n % 16;
		buf[i++] = base[res];
		n = n / 16;
	}
	res = i;
	while (i-- >= 0)
		write(1, &buf[i], 1);
	return (res);
}

int	print_ptr(va_list ap)
{
	void			*ptr;
	uintptr_t		temp;
	char			*str;
	int				i;

	ptr = va_arg(ap, void *);
	temp = (uintptr_t)ptr;
	write(1, "0x", 2);
	i = print_hexptr(temp);
	return (i + 2);
}
