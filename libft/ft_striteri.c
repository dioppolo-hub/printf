/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dioppolo <dioppolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 12:45:30 by dioppolo          #+#    #+#             */
/*   Updated: 2025/12/11 10:02:28 by dioppolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int		i;

	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
/* void    to_upper_iter(unsigned int i, char *c)
{
    (void)i;
    if (*c >= 'a' && *c <= 'z')
        *c = *c - 32;
}
void    print_with_index(unsigned int i, char *c)
{
    printf("[%u]='%c' ", i, *c);
}
void    double_consonants(unsigned int i, char *c)
{
    (void)i;
    if ((*c >= 'b' && *c <= 'z') || (*c >= 'B' && *c <= 'Z'))
    {
        if (*c != 'a' && *c != 'e' && *c != 'i' && *c != 'o' && *c != 'u' &&
            *c != 'A' && *c != 'E' && *c != 'I' && *c != 'O' && *c != 'U')
            *c = *c + 1;
    }
}
int main(void)
{
    char    str1[50] = "hello world";
    char    str2[50] = "ciao";
    char    str3[50] = "";
    printf("=== Test 1: To uppercase ===\n");
    printf("Before: %s\n", str1);
    ft_striteri(str1, to_upper_iter);
    printf("After:  %s\n\n", str1);
    printf("=== Test 2: Print with index ===\n");
    char str_test[50] = "test";
    printf("String: ");
    ft_striteri(str_test, print_with_index);
    printf("\n\n");
    printf("=== Test 3: Modify consonants ===\n");
    printf("Before: %s\n", str2);
    ft_striteri(str2, double_consonants);
    printf("After:  %s\n\n", str2);
    printf("=== Test 4: Empty string (no crash) ===\n");
    printf("Before: '%s'\n", str3);
    ft_striteri(str3, to_upper_iter);
    printf("After:  '%s'\n", str3);
    return (0);
} */