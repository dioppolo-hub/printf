/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dioppolo <dioppolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 15:40:54 by dioppolo          #+#    #+#             */
/*   Updated: 2025/12/16 11:49:06 by dioppolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	unsigned char	str;

	str = (unsigned char)c;
	if (!(str >= '0' && str <= '9')
		&& !(str >= 'a' && str <= 'z')
		&& !(str >= 'A' && str <= 'Z'))
		return (0);
	return (1);
}

/* int	main ()
{
	int c = 'a'; 

	printf("mio:%d\n", ft_isalnum(c));
	printf("reale:%d\n", isalnum(c));
} */