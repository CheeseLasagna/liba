/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlavelle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/12 18:49:21 by tlavelle          #+#    #+#             */
/*   Updated: 2020/05/26 10:19:14 by tlavelle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*pointer;
	size_t	counter;

	counter = 0;
	if (!s)
		return (NULL);
	if (ft_strlen(s) < start)
		return (NULL);
	pointer = (char*)malloc(sizeof(char) * (len + 1));
	if (pointer == 0)
		return (NULL);
	while (counter < len && s[start + counter] != 0)
	{
		pointer[counter] = s[start + counter];
		counter++;
	}
	pointer[counter] = '\0';
	return (pointer);
}
