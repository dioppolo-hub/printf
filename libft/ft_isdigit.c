/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dioppolo <dioppolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 15:40:54 by dioppolo          #+#    #+#             */
/*   Updated: 2025/12/02 09:27:59 by dioppolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	unsigned char	str;

	str = (unsigned char)c;
	if (!(str >= '0' && str <= '9'))
		return (0);
	return (1);
}

/*  int	main (int argc, char **argv)
{
	int c = 'a'; 

	printf("mio:%d\n", ft_isdigit(c));
	printf("reale:%d\n", isdigit(c));
}  */