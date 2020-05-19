/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlavelle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/11 11:04:47 by tlavelle          #+#    #+#             */
/*   Updated: 2020/05/18 12:03:09 by tlavelle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	char	*first;
	char	*second;
	size_t	length;

	first = (char*)big;
	second = (char*)little;
	length = len;
	if (*second == 0)
		return ((char*)big);
	while (*big != 0)
	{
		while (*first++ == *second++)
		{
			if (--length == 0 || *second == 0)
				return ((char*)big);
		}
		big++;
		first = (char*)big;
		second = (char*)little;
		length = len;
	}
	return (NULL);
}
