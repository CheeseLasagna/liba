/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlavelle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/21 17:58:47 by tlavelle          #+#    #+#             */
/*   Updated: 2020/05/26 10:43:45 by tlavelle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*temp;

	temp = (t_list*)malloc(sizeof(t_list));
	if (temp == NULL)
		return (NULL);
	temp->next = NULL;
	temp->content = content;
	return (temp);
}
