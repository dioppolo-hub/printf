/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexprint.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dioppolo <dioppolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/03 00:00:00 by auto              #+#    #+#             */
/*   Updated: 2026/01/07 10:01:40 by dioppolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
	while (i-- >= 0)
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
	while (i-- >= 0)
		write(1, &buf[i], 1);
	return (res);
}

int	print_hexptr(uintptr_t n)
{
	int		i;
	int		res;
	char	buf[32];
	char	*base;

	base = "0123456789abcdef";
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
	int				i;

	ptr = va_arg(ap, void *);
	temp = (uintptr_t)ptr;
	write(1, "0x", 2);
	i = print_hexptr(temp);
	return (i + 2);
}
