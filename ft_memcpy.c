/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlavelle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/09 13:22:34 by tlavelle          #+#    #+#             */
/*   Updated: 2020/05/15 13:21:37 by tlavelle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "string.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*destination;
	unsigned char	*source;

	destination = (unsigned char*)dest;
	source = (unsigned char*)src;
	while (n != 0)
	{
		*destination = *source;
		destination++;
		source++;
		n--;
	}
	return (dest);
}
