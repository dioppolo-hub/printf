/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dioppolo <dioppolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 16:24:33 by dioppolo          #+#    #+#             */
/*   Updated: 2025/11/28 12:05:57 by dioppolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*str;

	i = 0;
	str = (char *)s;
	while (i < n)
	{
		*str = '\0';
		str++;
		i++;
	}
}

/* int main()
{
    char buffer[] = "This is a test of the memset function";

    printf( "Before: %s\n", buffer );
    ft_bzero( buffer, 4);
    printf( "After:  %s\n", buffer ); 
}  */