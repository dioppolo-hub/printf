/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dioppolo <dioppolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 11:57:38 by dioppolo          #+#    #+#             */
/*   Updated: 2025/12/16 12:04:41 by dioppolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	c;
	char	*cpy;

	i = 0;
	if (!s)
		return (NULL);
	cpy = ft_strdup(s);
	if (!cpy)
		return (NULL);
	while (s[i])
	{
		c = f(i, s[i]);
		cpy[i] = c;
		i++;
	}
	return (cpy);
}
/* char	f_tolower(unsigned int index, char c)
{
	(void)index;
	if(c >= 'A' && c <= 'Z')
		c = c + 32;
	return (c);
}

int	main()
{
	char *str = "HELLO WORLD";

	printf("prima:%s\n", str);
	printf("dopo:%s\n", ft_strmapi(str, f_tolower));
} */