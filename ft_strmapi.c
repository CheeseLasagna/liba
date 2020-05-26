/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlavelle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/14 19:47:35 by tlavelle          #+#    #+#             */
/*   Updated: 2020/05/26 10:12:24 by tlavelle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*pointer;
	unsigned int	index;

	index = 0;
	if (!s)
		return (NULL);
	pointer = (char*)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (pointer == 0)
		return (NULL);
	while (s[index])
	{
		pointer[index] = f(index, s[index]);
		index++;
	}
	pointer[index] = '\0';
	return (pointer);
}
