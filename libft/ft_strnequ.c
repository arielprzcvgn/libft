/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ariperez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/14 19:50:10 by ariperez          #+#    #+#             */
/*   Updated: 2018/11/22 17:28:31 by ariperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	size_t	i;

	if (!n)
		return (1);
	if (s1 && s2)
	{
		i = 0;
		while (*(s1 + i) == *(s2 + i) && i < n)
		{
			if ((*(s1 + i) == '\0' && *(s2 + i) == '\0') || i == n - 1)
				return (1);
			i++;
		}
	}
	return (0);
}