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
			if (*fmt == '%')
			{
				write(1, "%", 1);
				fmt++;
				len++;
			}
			if (*fmt == 'c')
			{
				len = len + print_char(ap);
				fmt++;
			}
			else if (*fmt == 's')
			{
				len = len + print_str(ap);
				fmt++;
			}
			else if (*fmt == 'd' || *fmt == 'i')
			{
				len = len + print_int(ap);
				fmt++;
			}
			else if (*fmt == 'u')
			{
				len = len + print_uns(ap);
				fmt++;
			}
			else if (*fmt == 'x')
			{
				len = len + print_hex(ap);
				fmt++;
			}
			else if (*fmt == 'X')
			{
				len = len + print_uphex(ap);
				fmt++;
			}
			else if (*fmt == 'p')
			{
				len = len + print_ptr(ap);
				fmt++;
			}
		}
		else
		{
			write(1, fmt, 1);
			len++;
			fmt++;
		}
	}
	va_end(ap);
	return (len);
}

int main ()
{
	int	printlen = 0;
	void *abc = "abc";

	printf("-------mio:---------\n");
	printf("%d\n", ft_printf("Hello %porld!\n", abc));
	printf("-------reale:-------\n");
	printlen = printf("Hello %porld!\n", abc);
	printf("%d\n", printlen);
	return (0);
}