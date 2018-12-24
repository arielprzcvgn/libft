/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ariperez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/10 16:39:23 by ariperez          #+#    #+#             */
/*   Updated: 2018/11/21 13:50:52 by ariperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memccpy(void *d, const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*dst;
	unsigned char	*src;

	dst = (unsigned char *)d;
	src = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		*(dst + i) = *(src + i);
		if (*(src + i) == (unsigned char)c)
			return (d + i + 1);
		i++;
	}
	return (NULL);
}
