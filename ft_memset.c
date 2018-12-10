/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qfadene <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 10:42:55 by qfadene           #+#    #+#             */
/*   Updated: 2018/11/12 11:30:22 by qfadene          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	char	*m;
	size_t	i;

	i = 0;
	m = (char*)b;
	while (i < len)
	{
		m[i] = (unsigned char)c;
		i++;
	}
	return (b);
}
