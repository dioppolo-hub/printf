/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dioppolo <dioppolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 11:04:11 by dioppolo          #+#    #+#             */
/*   Updated: 2025/12/16 10:59:03 by dioppolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	src_len;

	i = 0;
	j = 0;
	src_len = 0;
	if (!src || !dest)
		return (0);
	if (size == 0)
		return (ft_strlen(src));
	while (src[src_len])
		src_len++;
	while (i < size && dest[i])
		i++;
	if (size <= i)
		return (size + src_len);
	while (src[j] && (i + j) < (size - 1))
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (i + src_len);
}

/* int	main(void)
{
	char	dest1[14] = "123456789   ";
	char	dest2[14] = "123456789   ";
	char	src[] = "123";
	size_t size = sizeof(dest1);

	printf("mio:%zu   -%s-\n", ft_strlcat(dest1, src, size), dest1);
	printf("reale:%zu    -%s-\n", strlcat(dest2, src, size), dest2);
} */