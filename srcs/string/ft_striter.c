/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ariperez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/14 18:58:03 by ariperez          #+#    #+#             */
/*   Updated: 2019/04/02 15:52:58 by ariperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_striter(char *s, void (*f)(char *))
{
	int	i;

	if (s && (*f))
	{
		i = 0;
		while (s && *(s + i) != '\0')
		{
			f(s + i);
			i++;
		}
	}
}