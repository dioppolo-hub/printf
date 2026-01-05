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

int	print_char(va_list ap)
{
	int c;
	c = va_arg(ap, int);
	write(1, &c, 1);
	return (1);
}

int	print_str(va_list ap)
{
	int		i;
	char	*c;

	i = 0;
	c = va_arg(ap, char *);
	while (c[i])
	{
		write(1, &c[i], 1);
		i++;
	}
	return (i);
}

int	print_int(va_list ap)
{
	char 	*str;
	int		i;
	int		n;

	i = 0;
	n = va_arg(ap, int);
	ft_putnbr_fd(n, 1);
	str = ft_itoa(n);
	while (str[i])
		i++;
	free(str);
	return (i);
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
			{
				len = len + print_char(ap);
				fmt++;
			}
			else if (*fmt == 's')
			{
				len = len + print_str(ap);
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
	printf("mio:%d\n", ft_printf("Hello %dorld!\n", 42));
	printlen = printf("Hello %dorld!\n", 42);
	printf("reale:%d\n", printlen);
	return (0);
}