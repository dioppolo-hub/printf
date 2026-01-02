/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dioppolo <dioppolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 15:40:54 by dioppolo          #+#    #+#             */
/*   Updated: 2025/11/28 11:39:39 by dioppolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;
	char	*str;

	i = 0;
	str = (char *)s;
	while (i < n)
	{
		*str = (char)c;
		i++;
		str++;
	}
	return (s);
}

/* int main()
{
    char buffer[] = "This is a test of the memset function";

    printf("mio:%s\n",(char *)ft_memset( buffer, 42, 4 ));
	printf("reale:%s\n",(char *)memset( buffer, 42, 4 ));
}  */