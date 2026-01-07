/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dioppolo <dioppolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/10 10:54:10 by dioppolo          #+#    #+#             */
/*   Updated: 2026/01/07 09:32:46 by dioppolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static long int	countlen(long int k)
{
	long int	count;

	count = 0;
	if (k < 0)
	{
		k = k * -1;
	}
	while (k != 0)
	{
		k = k / 10;
		count++;
	}
	return (count);
}

static long int	tenten(long int count)
{
	long int	i;
	long int	ten;

	i = 1;
	ten = 1;
	while (i < count)
	{
		ten = ten * 10;
		i++;
	}
	return (ten);
}

void	ft_putnbr_fd(int n, int fd)
{
	long int		count;
	long int		i;
	long int		ten;
	long int		k;
	char			c;

	k = (long int)n;
	i = 0;
	count = countlen(k);
	ten = tenten(count);
	if (k == 0)
		write(fd, "0", 1);
	if (k < 0)
	{
		k = k * -1;
		write(fd, "-", 1);
	}
	while (i < count)
	{
		c = (k / ten) + '0';
		write(fd, &c, 1);
		k = k % ten;
		ten = ten / 10;
		i++;
	}
}

/* int	main()
{
	long int	n = INT_MIN; 
	long int	fd = 1;

	ft_putnbr_fd(n, fd);
} */