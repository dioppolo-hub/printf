/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_charprint.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dioppolo <dioppolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/03 00:00:00 by auto              #+#    #+#             */
/*   Updated: 2026/01/07 12:13:58 by dioppolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_char(va_list ap)
{
	int	c;

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
	if (c == NULL)
	{
		write(1, "(null)", 6);
		return (6);
	}
	while (c[i])
	{
		write(1, &c[i], 1);
		i++;
	}
	return (i);
}
