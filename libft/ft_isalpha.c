/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dioppolo <dioppolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 15:40:54 by dioppolo          #+#    #+#             */
/*   Updated: 2025/12/02 09:27:49 by dioppolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	unsigned char	str;

	str = (unsigned char)c;
	if (!(str >= 'A' && str <= 'Z')
		&& !(str >= 'a' && str <= 'z'))
		return (0);
	return (1);
}

/* int	main ()
{
	int c = 'a'; 

	printf("mio:%d\n", ft_isalpha(c));
	printf("reale:%d\n", isalpha(c));
} */