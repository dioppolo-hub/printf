/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dioppolo <dioppolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 11:56:03 by dioppolo          #+#    #+#             */
/*   Updated: 2025/12/18 11:26:07 by dioppolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*p;
	size_t	totsize;

	totsize = size * nmemb;
	if (size > 0 && totsize / size != nmemb)
		return (NULL);
	p = malloc(nmemb * size);
	if (p == NULL)
		return (p);
	ft_bzero(p, (nmemb * size));
	return (p);
}

/* int	main()
{
	size_t nmemb = 10;
	size_t size = 4;
	
	ft_calloc(nmemb, size);
} */