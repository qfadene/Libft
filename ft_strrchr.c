/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qfadene <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/11 17:21:42 by qfadene           #+#    #+#             */
/*   Updated: 2018/11/11 18:16:30 by qfadene          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;
	int	size;
	int last;
	int iter;

	i = 0;
	last = 0;
	iter = 0;
	size = ft_strlen(s);
	if (c == 0)
		return ((char*)&s[size]);
	while (s[i])
	{
		if (s[i] == c)
		{
			last = i;
			iter++;
		}
		i++;
	}
	if (iter != 0)
		return ((char*)&s[last]);
	return (NULL);
}
