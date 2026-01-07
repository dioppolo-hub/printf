/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dioppolo <dioppolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/03 00:00:00 by auto              #+#    #+#             */
/*   Updated: 2026/01/07 12:06:51 by dioppolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_cases(va_list ap, const char *fmt, int len)
{
	len = 0;
	if (*fmt == '%')
	{
		write(1, "%", 1);
		len++;
	}
	if (*fmt == 'c')
		len = len + print_char(ap);
	else if (*fmt == 's')
		len = len + print_str(ap);
	else if (*fmt == 'd' || *fmt == 'i')
		len = len + print_int(ap);
	else if (*fmt == 'u')
		len = len + print_uns(ap);
	else if (*fmt == 'x')
		len = len + print_hex(ap);
	else if (*fmt == 'X')
		len = len + print_uphex(ap);
	else if (*fmt == 'p')
		len = len + print_ptr(ap);
	return (len);
}

int	ft_printf(const char *fmt, ...)
{
	va_list	ap;
	int		len;

	len = 0;
	if (!fmt)
		return (0);
	va_start(ap, fmt);
	while (*fmt)
	{
		if (*fmt == '%')
		{
			fmt++;
			len = len + ft_cases(ap, fmt, len);
			fmt++;
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

/* int main ()
{
	int	printlen = 0;

	//void *testptr = "abc";
	//int testD = 42;
	//char testChar = 'W';
	//char *testStr = "World";
	//int testHex = 4242;

	printf("-------mio:---------\n");
	printf("%d\n", ft_printf("%u", -1));
	printf("-------reale:-------\n");
	printlen = printf("%u", -1);
	printf("%d\n", printlen);
	return (0);
} */