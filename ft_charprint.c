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