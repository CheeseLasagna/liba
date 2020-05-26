/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlavelle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/12 18:59:29 by tlavelle          #+#    #+#             */
/*   Updated: 2020/05/26 10:20:14 by tlavelle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char *pointer;
	char *assign;

	if (!s1 || !s2)
		return (NULL);
	pointer = (char*)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	assign = pointer;
	if (pointer == 0)
		return (NULL);
	while (*s1)
		*assign++ = *s1++;
	while (*s2)
		*assign++ = *s2++;
	*assign = '\0';
	return (pointer);
}
