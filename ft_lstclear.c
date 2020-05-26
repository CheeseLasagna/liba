/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlavelle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/22 11:20:51 by tlavelle          #+#    #+#             */
/*   Updated: 2020/05/26 15:38:00 by tlavelle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list *current;
	t_list *temp;
	
	if (!lst)
		return (NULL);
	current = *lst;
	while (current != NULL)
	{
		temp = current;
		del(current->content);
		current = current->next;
		free(temp);	
	}
	free(*lst);
	*lst = NULL;
}
