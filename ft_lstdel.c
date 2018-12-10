/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstel.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qfadene <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/14 10:45:26 by qfadene           #+#    #+#             */
/*   Updated: 2018/11/14 10:57:27 by qfadene          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*elem;

	if (alst != NULL)
	{
		while (*alst != NULL)
		{
			elem = (*alst)->next;
			del((*alst)->content, (*alst)->content_size);
			free(*alst);
			*alst = elem;
		}
		*alst = NULL;
	}
}
