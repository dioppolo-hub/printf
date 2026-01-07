/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dioppolo <dioppolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/10 10:54:10 by dioppolo          #+#    #+#             */
/*   Updated: 2026/01/07 09:39:37 by dioppolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putunbr_fd(unsigned int n, int fd)
{
	long int		k;
	char			c;

	k = (long int)n;
	if (k == 0)
		write(fd, "0", 1);
	if (k < 0)
	{
		k = k * -1;
		write(fd, "-", 1);
	}
	if (n >= 10)
		ft_putunbr_fd(n / 10, fd);
	c = '0' + (n % 10);
	write(fd, &c, 1);
}

/* int	main()
{
	long int	n = INT_MIN; 
	long int	fd = 1;

	ft_putnbr_fd(n, fd);
} */