/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qfadene <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 11:35:21 by qfadene           #+#    #+#             */
/*   Updated: 2018/11/12 12:40:59 by qfadene          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*m;
	size_t	i;

	i = 0;
	m = (char*)s;
	while (n > 0)
	{
		m[i] = 0;
		n--;
		i++;
	}
}