/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lowercase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qfadene <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/16 13:46:43 by qfadene           #+#    #+#             */
/*   Updated: 2018/11/16 14:56:36 by qfadene          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_lowercase(char *str)
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
		if (str[i] > 64 && str[i] < 91)
			res[i] = str[i] + 32;
		else
			res[i] = str[i];
		i++;
	}
	res[i] = '\0';
	return (res);
}
