/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dioppolo <dioppolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 10:03:19 by dioppolo          #+#    #+#             */
/*   Updated: 2025/12/18 11:24:45 by dioppolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int count_digits(unsigned int n)
{
    int i = 0;

    if (n == 0)
        return (1);
    while (n)
    {
        n /= 10;
        i++;
    }
    return (i);
}

char *ft_uitoa(unsigned int n)
{
    int len = count_digits(n);
    char *s = malloc(len + 1);

    if (!s)
		return (NULL);
    s[len] = '\0';
    if (n == 0)
    {
        s[0] = '0';
        return (s);
    }
    while (len--)
    {
        s[len] = '0' + (n % 10);
        n /= 10;
    }
    return (s);
}

/* int main()
{
	int	n = 0;
	char *itoato = ft_itoa(n);
	printf("%s\n",itoato);
	free(itoato);
} */