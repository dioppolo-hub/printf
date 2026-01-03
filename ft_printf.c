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

void print_char(va_list ap, int written)
{
	int c;
	c = va_arg(ap, int);
	write(1, &c, 1);
	written++;
}

int ft_printf(const char *fmt, ...)
{
	va_list ap;
	int written = 0;

	if (!fmt)
		return (0);
	va_start(ap, fmt);
	while (*fmt)
	{
		if (*fmt == '%')
		{
			fmt++;
			if (*fmt == 'c')
				print_char(ap, written);
			else if (*fmt == '%')
			{
				write(1, "%", 1);
				written++;
			}
			else
			{
				/* unsupported specifier: print it literally */
				if (*fmt)
				{
					write(1, fmt, 1);
					written++;
				}
			}
			if (*fmt)
				fmt++;
		}
		else
		{
			write(1, fmt, 1);
			written++;
			fmt++;
		}
	}
	va_end(ap);
	return (written);
}

int main ()
{
	int	printlen = 0;
	printf("mio:%d\n", ft_printf("Hello %corld%%!\n", 'W'));
	printlen = printf("Hello %corld%%!\n", 'W');
	printf("reale:%d\n", printlen);
	return (0);
}