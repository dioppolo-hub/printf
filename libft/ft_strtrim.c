/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dioppolo <dioppolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/02 11:01:28 by dioppolo          #+#    #+#             */
/*   Updated: 2025/12/16 09:59:34 by dioppolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check(char const *set, const char c)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	size_t	lens1;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	lens1 = ft_strlen(s1);
	end = lens1 - 1;
	while (s1[start] && check(set, s1[start]))
		start++;
	while (s1[end] && check(set, s1[end]))
		end--;
	if (start > end)
		return (ft_strdup(""));
	return (ft_substr(s1, start, end - start + 1));
}

/* int	main()
{
	const char s1[] = "     ";
	const char set[] = " ";
	printf("%s\n", ft_strtrim(s1, set));
} */