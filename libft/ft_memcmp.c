/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ariperez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/18 15:05:47 by ariperez          #+#    #+#             */
/*   Updated: 2018/11/19 14:25:50 by ariperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	unsigned char		*first;
	unsigned char		*second;

	first = (unsigned char *)s1;
	second = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (*(first + i) != *(second + i))
			return (*(first + i) - *(second + i));
		i++;
	}
	return (0);
}
