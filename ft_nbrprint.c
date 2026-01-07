/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbrprint.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dioppolo <dioppolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/03 00:00:00 by auto              #+#    #+#             */
/*   Updated: 2026/01/07 09:47:41 by dioppolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
	int				n;
	unsigned long	b;

	i = 0;
	n = va_arg(ap, unsigned int);
	if (n < 0)
	{
		b = (1ULL << 32) - 42;
		ft_putunbr_fd(b, 1);
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
