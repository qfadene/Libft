/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uppercase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qfadene <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/16 13:47:04 by qfadene           #+#    #+#             */
/*   Updated: 2018/11/16 14:57:27 by qfadene          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_uppercase(char *str)
{
	int		i;
	char	*res;

	i = 0;
	if (str == NULL)
		return (NULL);
	if (!(res = ft_strnew(ft_strlen(str) - 1)))
		return (NULL);
	while (str[i])
	{
		if (str[i] > 96 && str[i] < 123)
			res[i] = str[i] - 32;
		else
			res[i] = str[i];
		i++;
	}
	res[i] = '\0';
	return (res);
}
