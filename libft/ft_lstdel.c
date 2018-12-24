/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ariperez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/22 14:40:13 by ariperez          #+#    #+#             */
/*   Updated: 2018/11/22 17:19:19 by ariperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	if (*alst && *del)
	{
		del((*alst)->content, (*alst)->content_size);
		ft_lstdel(&(*alst)->next, del);
	}
	free(*alst);
	*alst = NULL;
}
