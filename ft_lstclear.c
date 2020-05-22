/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlavelle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/22 11:20:51 by tlavelle          #+#    #+#             */
/*   Updated: 2020/05/22 12:00:25 by tlavelle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list *temp;

	temp = *lst;
	while (temp != NULL)
	{
		del(temp->content);
		temp = temp->next;
	}
	free(*lst);
	*lst = NULL;
}
