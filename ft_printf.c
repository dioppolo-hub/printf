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

void print_char(va_list ap, const char *fmt, int len)
{
	int c;
	c = va_arg(ap, int);
	write(1, &c, 1);
	len++;
	fmt++;
}

void	print_str(va_list ap, const char *fmt, int len)
{
	int	i;
	int	c;

	i = 0;
	while (fmt[i])
	{
		c = va_arg(ap, int);
		write(1, &c, 1);
		i++;
	}
	len++;
	fmt++;
}

int ft_printf(const char *fmt, ...)
{
	va_list ap;
	int len = 0;

	if (!fmt)
		return (0);
	va_start(ap, fmt);
	while (*fmt)
	{
		if (*fmt == '%')
		{
			fmt++;
			if (*fmt == 'c')
				print_char(ap, fmt, len);
			else if (*fmt == 's')
				print_str(ap, fmt, len);
		}
			write(1, fmt, 1);
			len++;
			fmt++;
	}
	va_end(ap);
	return (len);
}

int main ()
{
	int	printlen = 0;
	printf("mio:%d\n", ft_printf("Hello %corld!\n", 'W'));
	printlen = printf("Hello %corld!\n", 'W');
	printf("reale:%d\n", printlen);
	return (0);
}