/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dioppolo <dioppolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/10 10:26:46 by dioppolo          #+#    #+#             */
/*   Updated: 2025/12/11 10:02:48 by dioppolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

/* int	main()
{
	char	c = 'a';
	int		fd = 4;

	ft_putchar_fd(c, fd);
	printf("[%d]\n", fd);
	printf("{%c}\n", c);
}  */