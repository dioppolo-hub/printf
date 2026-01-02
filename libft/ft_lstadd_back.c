/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dioppolo <dioppolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 12:26:42 by dioppolo          #+#    #+#             */
/*   Updated: 2025/12/15 16:35:24 by dioppolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*corrente;

	corrente = *lst;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	while (corrente->next != NULL)
		corrente = corrente->next;
	corrente->next = new;
}
/* void	printlist(t_list *p)
{
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
int		main()
{
	t_list *testa;
	t_list *nodo1 = NULL;
	t_list *nodo2 = NULL;
	t_list *new = NULL;
	//t_list *provavuota = NULL;
	
	nodo1 = (t_list *)malloc(sizeof(t_list *));
	nodo2 = (t_list *)malloc(sizeof(t_list *));
	new = (t_list *)malloc(sizeof(t_list *));

	nodo1->content = "ciao";
	nodo2->content = "a";
	new->content = "tutti";

	nodo1->next = nodo2;
	nodo2->next = NULL;

	testa = nodo1;
	
	printf("prima:\n");
	printlist(testa);
	ft_lstadd_back(&testa, new);
	printf("dopo:\n");
	printlist(testa);
} */