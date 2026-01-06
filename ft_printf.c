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

int	print_uns(va_list ap)
{
	char 			*str;
	int				i;
	int				n;
	unsigned long	b;

	i = 0;
	n = va_arg(ap, unsigned int);
	if (n < 0)
	{
		b = (1ULL << 32) - 42;
		ft_uputnbr_fd(b, 1);
		str = ft_uitoa(b);
		while (str[i])
			i++;
		free(str);
		return (i);
	}
	ft_putnbr_fd(n, 1);
	str = ft_itoa(n);
	while (str[i])
		i++;
	free(str);
	return (i);
}

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

int	print_pnt(va_list ap)
{
	void	*ptr;
	char	*str;
	int		i;

	ptr = va_arg(ap, void *);
	str = ft_itoa(ptr);
	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	printf("[%p]", ptr);
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
				len = len + print_HEX(ap);
				fmt++;
			}
			else if (*fmt == 'p')
			{
				len = len + print_pnt(ap);
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
	void *abc;

	printf("-------mio:---------\n");
	printf("%d\n", ft_printf("Hello %porld!\n", abc));
	//printf("-------reale:-------\n");
	//printlen = printf("Hello %porld!\n", abc);
	//printf("%d\n", printlen);
	return (0);
}