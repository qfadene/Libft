/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qfadene <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/16 11:44:16 by qfadene           #+#    #+#             */
/*   Updated: 2018/11/16 13:35:24 by qfadene          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list *tmp;

	tmp = NULL;
	if (lst != NULL)
	{
		tmp = lst;
		while (tmp->next != NULL)
		{
			tmp = tmp->next;
		}
	}
	return (tmp);
}
