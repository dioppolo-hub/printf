/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dioppolo <dioppolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 10:20:32 by dioppolo          #+#    #+#             */
/*   Updated: 2025/12/16 10:48:56 by dioppolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		i;
	int		len;
	size_t	nmemb;
	char	*dup;

	if (!s)
		return (NULL);
	i = 0;
	len = 0;
	nmemb = ft_strlen(s);
	dup = (char *)malloc((nmemb + 1) * sizeof(char));
	if (!dup)
		return (NULL);
	while (s[i])
	{
		dup[i] = s[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

/* int	main()
{
	const char str[] = "";

	printf("vera:%s\n", str);
	printf("copia:%s\n", ft_strdup(str));
} */