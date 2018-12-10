/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qfadene <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 14:55:47 by qfadene           #+#    #+#             */
/*   Updated: 2018/11/12 15:19:47 by qfadene          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	char	*a;
	char	*b;
	size_t	i;

	a = (char*)s1;
	b = (char*)s2;
	i = 0;
	while (i < n)
	{
		if (a[i] != b[i])
			return ((int)((unsigned char)a[i] - (unsigned char)b[i]));
		i++;
	}
	return (0);
}
