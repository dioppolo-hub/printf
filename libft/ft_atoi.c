/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dioppolo <dioppolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 11:47:51 by dioppolo          #+#    #+#             */
/*   Updated: 2025/12/02 09:29:45 by dioppolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	pos;
	int	ris;

	i = 0;
	ris = 0;
	pos = 1;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			pos = pos * -1;
		i++;
	}
	if (str[i] == '-' || str[i] == '+')
		return (0);
	while (str[i] >= '0' && str[i] <= '9')
	{
		ris = (ris * 10) + (str[i] - '0');
		i++;
	}
	return (ris * pos);
}

/* int	main()
{
	char	str[] = "-2147483648";
	printf("mio:%d\n", ft_atoi(str));
	printf("reale:%d\n", atoi(str));
} */