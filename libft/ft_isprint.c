/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dioppolo <dioppolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 15:40:54 by dioppolo          #+#    #+#             */
/*   Updated: 2025/12/16 12:00:17 by dioppolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	unsigned char	str;

	str = (unsigned char)c;
	if (str >= 32 && str <= 126)
		return (1);
	return (0);
}
/*
int	main ()
{
	int c = 'a'; 

	printf("mio:%d\n", ft_isprint(c));
	printf("reale:%d\n", isprint(c));
}*/