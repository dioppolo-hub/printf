/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dioppolo <dioppolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 10:03:19 by dioppolo          #+#    #+#             */
/*   Updated: 2026/01/07 10:38:58 by dioppolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	countlen(long int n)
{
	long int	count;

	count = 0;
	if (n < 0)
		count++;
	if (n == 0)
		return (1);
	while (n != 0)
	{
		n = n / 10;
		count++;
	}
	return (count);
}

static char	*convert(long int n, long int j, char *str)
{
	long int	i;
	long int	mod;

	i = 0;
	mod = 0;
	if (n < 0)
	{
		n = n * -1;
		str[0] = '-';
	}
	if (n == 0)
	{
		str[i] = n + '0';
		return (&str[i]);
	}
	while (n != 0)
	{
		mod = n % 10;
		n = n / 10;
		str[j] = mod + '0';
		j--;
	}
	return (&str[i]);
}

char	*ft_itoa(int n)
{
	long int	i;
	long int	j;
	char		*str;
	long int	len;

	i = 0;
	len = countlen(n);
	j = len - 1;
	str = (char *)ft_calloc(len + 1, sizeof(char));
	if (!str)
		return (NULL);
	str[i] = '\0';
	return (convert(n, j, str));
}

/* int main()
{
	int	n = 0;
	char *itoato = ft_itoa(n);
	printf("%s\n",itoato);
	free(itoato);
} */