/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dioppolo <dioppolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 14:33:40 by dioppolo          #+#    #+#             */
/*   Updated: 2025/12/15 16:34:14 by dioppolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_testa;
	t_list	*new_nodo;
	t_list	*new_content;

	if (!lst || !f || !del)
		return (NULL);
	new_testa = NULL;
	while (lst)
	{
		new_content = f(lst->content);
		new_nodo = ft_lstnew(new_content);
		if (!new_nodo)
		{
			del(new_content);
			ft_lstclear(&new_testa, del);
			return (NULL);
		}
		ft_lstadd_back(&new_testa, new_nodo);
		lst = lst->next;
	}
	return (new_testa);
}
/* void	del(void *content)
{
	free(content);
}
void	*lower(void *content)
{
	char	*src;
	char	*dst;
	int	i;

	src = (char *)content;
	dst = ft_strdup(src);
	if (!dst)
		return (NULL);
	i = 0;
	while (dst[i])
	{
		dst[i] = ft_tolower((unsigned char) dst[i]);
		i++;
	}
	return(dst);
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
	t_list *testa = NULL;
	t_list *new_testa = NULL;

	ft_lstadd_back(&testa, ft_lstnew(ft_strdup("HELLO")));

	printf("lista1 prima:\n");
	printlist(testa);
	printf("lista2 prima:\n\n");
	printlist(new_testa);
	new_testa = ft_lstmap(testa, lower, del);
	printf("lista1 dopo:\n");
	printlist(testa);
	printf("lista2 dopo:\n");
	printlist(new_testa);

 	ft_lstclear(&testa, del);
	ft_lstclear(&new_testa, del);
}
 */