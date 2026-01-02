/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dioppolo <dioppolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/02 10:18:01 by dioppolo          #+#    #+#             */
/*   Updated: 2025/12/16 12:13:40 by dioppolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*scorri_s(char const *s1, char const *s2,
	char *newstr, size_t lens1)
{
	size_t	i;

	i = 0;
	while (s1[i])
	{
		newstr[i] = s1[i];
		i++;
	}
	while (s2[i - lens1])
	{
		newstr[i] = s2[i - lens1];
		i++;
	}
	newstr[i] = '\0';
	return (newstr);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t		lens1;
	size_t		lens2;
	size_t		tot;
	size_t		i;
	char		*newstr;

	if (!s1 || !s2)
		return (NULL);
	lens1 = ft_strlen(s1);
	lens2 = ft_strlen(s2);
	tot = lens1 + lens2;
	i = 0;
	newstr = malloc((tot + 1) * sizeof(char));
	if (!newstr)
		return (NULL);
	return (scorri_s(s1, s2, newstr, lens1));
}
/* int	main()
{
	const char str1[] = "Porta";
	const char str2[] = "Aerei";
	printf("%s\n", ft_strjoin(str1, str2));
} */