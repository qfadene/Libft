/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printnumtab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qfadene <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/16 11:10:06 by qfadene           #+#    #+#             */
/*   Updated: 2018/11/16 13:48:39 by qfadene          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_printnumtab(int *tab, int len)
{
	int i;

	i = 0;
	if (tab == NULL)
		return ;
	while (i < len)
	{
		ft_putnbr(tab[i]);
		ft_putchar('\n');
		i++;
	}
}
