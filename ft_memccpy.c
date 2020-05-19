/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlavelle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/09 14:14:40 by tlavelle          #+#    #+#             */
/*   Updated: 2020/05/15 13:14:51 by tlavelle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char *destination;
	unsigned char *source;

	destination = (unsigned char*)dest;
	source = (unsigned char*)src;
	while (n != 0)
	{
		*destination++ = *source++;
		if (*(destination - 1) == c)
		{
			return (destination);
		}
		n--;
	}
	return (NULL);
}
