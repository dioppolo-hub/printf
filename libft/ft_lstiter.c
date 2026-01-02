/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dioppolo <dioppolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 14:17:57 by dioppolo          #+#    #+#             */
/*   Updated: 2025/12/15 16:34:30 by dioppolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}
/* void	lower(void *content)
{
	char *str;
	int	i;

	str = (char *)content;
	i = 0;
	while (str[i])
	{
		str[i] = ft_tolower((unsigned char) str[i]);
		i++;
	}
}
void	printlist(t_list *p)
{
	if(p == NULL)
		return;
	while (p != NULL)
	{
		if (p->next != NULL)
			printf("[%s]->", (char *)p->content);
		else
			printf("[%s]", (char *)p->content);
		p = p->next;
	}
	printf("\n");
}
int	main()
{
	t_list *testa;
	t_list *nodo1;

	testa = ft_lstnew(ft_strdup("CIAO"));
	nodo1 = ft_lstnew(ft_strdup("MONDO"));

	testa->next = nodo1;
	nodo1->next = NULL;

	printf("prima:\n");
	printlist(testa);
	ft_lstiter(testa, lower);
	printf("dopo:\n");
	printlist(testa);
} */