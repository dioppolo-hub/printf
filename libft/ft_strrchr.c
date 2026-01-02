/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dioppolo <dioppolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 09:39:54 by dioppolo          #+#    #+#             */
/*   Updated: 2025/12/16 11:33:46 by dioppolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*last;

	if (!s)
		return (NULL);
	last = NULL;
	i = 0;
	while (s[i])
	{
		if ((unsigned char)s[i] == (unsigned char)c)
			last = ((char *)&s[i]);
		i++;
	}
	if ((unsigned char)c == '\0')
		return ((char *)&s[i]);
	return (last);
}

/* int	main()
{
	const char	str[] = "hsasdfdsaasdf";
	int	c = 'a';
	printf("mio:%s\n", ft_strrchr(str, c));
	printf("reale:%s\n", strrchr(str, c));
} */