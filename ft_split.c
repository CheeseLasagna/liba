/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlavelle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/13 18:20:11 by tlavelle          #+#    #+#             */
/*   Updated: 2020/05/20 18:35:41 by tlavelle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

int		wordsnb(char const *s, char c)
{
	int number;

	number = 0;
	while (*s != 0)
	{
		while (*s == c)
			s++;
		if (*s != 0)
		{
			number++;
			while (*s != c && *s != 0)
				s++;
		}
	}
	return (number);
}

char	**ft_free(char **pointer, int index)
{
	while (index >= 0)
	{
		free(pointer[index]);
		index--;
	}
	free(pointer);
	return (NULL);
}

int		ft_length(const char *s, char c)
{
	int length;

	length = 0;
	if (*s == '\0')
		return (0);
	while (*s != '\0' && *s != c)
	{
		length++;
		s++;
	}
	return (length);
}

char	**ft_split(char const *s, char c)
{
	char	**pointer;
	char	*str;
	int		index;
	int		length;
	int		numberofw;

	numberofw = wordsnb(s, c);
	index = -1;
	pointer = (char**)malloc(sizeof(char*) * (wordsnb(s, c) + 1));
	if (pointer == NULL)
		return (NULL);
	while (++index < numberofw)
	{
		while (*s == c)
			s++;
		length = ft_length(s, c);
		if (!(pointer[index] = (char*)malloc(sizeof(char) * (length + 1))))
			return (ft_free(pointer, index));
		str = pointer[index];
		while (length--)
			*str++ = *s++;
		*str = '\0';
	}
	pointer[index] = NULL;
	return (pointer);
}
