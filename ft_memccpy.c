/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlavelle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/09 14:14:40 by tlavelle          #+#    #+#             */
/*   Updated: 2020/05/20 10:59:00 by tlavelle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char *destination;
	unsigned char *source;
	unsigned char a;

	destination = (unsigned char*)dest;
	source = (unsigned char*)src;
	a = (unsigned char)c;
	while (n != 0)
	{
		*destination++ = *source++;
		if (*(destination - 1) == a)
		{
			return (destination);
		}
		n--;
	}
	return (NULL);
}
