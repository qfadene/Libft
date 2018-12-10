/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qfadene <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 13:02:29 by qfadene           #+#    #+#             */
/*   Updated: 2018/11/14 15:12:38 by qfadene          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*a;
	unsigned char	*b;
	unsigned char	k;
	size_t			i;

	a = (unsigned char*)dst;
	b = (unsigned char*)src;
	k = (unsigned char)c;
	i = 0;
	while (i < n && b[i] != k)
	{
		a[i] = b[i];
		i++;
	}
	if (i == n)
		return (NULL);
	else
	{
		a[i] = b[i];
		return (a + i + 1);
	}
}
