/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dioppolo <dioppolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 11:32:55 by dioppolo          #+#    #+#             */
/*   Updated: 2025/12/16 09:59:18 by dioppolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*s_str(char const *str, unsigned int start,
					size_t len, char *substr)
{
	size_t	i;
	size_t	j;

	j = 0;
	i = 0;
	if (!str || !substr)
		return (NULL);
	while (str[i] && i < start)
		i++;
	while (str[i] && j < len)
	{
		substr[j] = str[i];
		i++;
		j++;
	}
	substr[j] = '\0';
	return (substr);
}

char	*ft_substr(char const *str, unsigned int start, size_t len)
{
	size_t	i;
	size_t	lenstr;
	char	*substr;

	i = 0;
	if (!str)
		return (NULL);
	lenstr = ft_strlen(str);
	if (start > lenstr)
		return (ft_strdup(""));
	if (len > lenstr - start)
		len = lenstr - start;
	if (len == 0)
		return (ft_strdup(""));
	substr = malloc((len + 1) * sizeof(char));
	if (!substr)
		return (NULL);
	return (s_str(str, start, len, substr));
}

/* int	main()
{
	const char str[] = "PortaAerei";
	unsigned int start = 0;
	size_t len = 5;
	printf("%s\n", ft_substr(str, start, len));
} */