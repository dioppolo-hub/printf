/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prova.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/02 21:29:49 by marvin            #+#    #+#             */
/*   Updated: 2026/01/02 21:29:49 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	f_char (char *fmt, char args)
{
	write (1, args, 1);
	*fmt++;
}

int ft_printf (char *fmt)
{
	va_list args;
    va_start(args, fmt);
	while (*fmt)
	{
		if (*fmt == '%')
			*fmt++;
		if (*fmt == 'c')
			f_char(fmt, va_args(args, char))
		if (*fmt == NULL)
			return (ft_countlen(fmt));
	}
}

int main ()
{
    printf("a");
	ft_printf(fmt);
}