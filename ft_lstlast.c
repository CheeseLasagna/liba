/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlavelle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/21 18:35:28 by tlavelle          #+#    #+#             */
/*   Updated: 2020/05/22 13:20:48 by tlavelle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list *temp;

	temp = lst;
	if (lst == NULL)
		return (lst);
	while (temp->next != 0)
	{
		temp = temp->next;
	}
	return (temp);
}
