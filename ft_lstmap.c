/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlavelle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/25 16:06:01 by tlavelle          #+#    #+#             */
/*   Updated: 2020/05/26 10:43:08 by tlavelle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *root;
	t_list *new;
	t_list *tempnew;

	root = NULL;
	while (lst != NULL)
	{
		new = ft_lstnew(f(lst->content));
		if (new == NULL)
		{
			ft_lstclear(&root, del);
			free(new);
			return (NULL);
		}
		if (root == NULL)
		{
			root = new;
			tempnew = new;
		}
		tempnew->next = new;
		new->next = NULL;
		lst = lst->next;
	}
	return (root);
}
