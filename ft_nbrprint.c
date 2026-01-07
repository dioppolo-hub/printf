/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbrprint.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dioppolo <dioppolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/03 00:00:00 by auto              #+#    #+#             */
/*   Updated: 2026/01/07 12:12:18 by dioppolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_int(va_list ap)
{
	char	*str;
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
	char			*str;
	int				i;
	unsigned int	n;

	i = 0;
	n = va_arg(ap, unsigned int);
	ft_putunbr_fd(n, 1);
	str = ft_uitoa(n);
	while (str[i])
		i++;
	free(str);
	return (i);
}

void	ft_putunbr_fd(unsigned int n, int fd)
{
	char			c;

	if (n >= 10)
		ft_putunbr_fd(n / 10, fd);
	c = '0' + (n % 10);
	write(fd, &c, 1);
}

static int	count_digits(unsigned int n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (1);
	while (n)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_uitoa(unsigned int n)
{
	char	*s;
	int		len;

	len = count_digits(n);
	s = malloc(len + 1);
	if (!s)
		return (NULL);
	s[len] = '\0';
	if (n == 0)
	{
		s[0] = '0';
		return (s);
	}
	while (len--)
	{
		s[len] = '0' + (n % 10);
		n /= 10;
	}
	return (s);
}
