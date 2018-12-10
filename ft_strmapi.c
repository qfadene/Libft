/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qfadene <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 16:51:46 by qfadene           #+#    #+#             */
/*   Updated: 2018/11/14 19:04:51 by qfadene          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*res;
	size_t			i;
	unsigned int	j;

	i = 0;
	if (s == NULL)
		return (NULL);
	while (s[i])
		i++;
	if (!(res = ft_strnew(i)))
		return (NULL);
	j = 0;
	while (s[j])
	{
		res[j] = f(j, s[j]);
		j++;
	}
	res[j] = 0;
	return (res);
}
