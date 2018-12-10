/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qfadene <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 10:16:23 by qfadene           #+#    #+#             */
/*   Updated: 2018/11/15 12:11:34 by qfadene          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		spacesend(char const *s, int i)
{
	int end;

	end = 0;
	while ((i > 0) && (s[i] == ' ' || s[i] == '\n' || s[i] == '\t'))
	{
		end++;
		i--;
	}
	if (i == 0)
		end = -1;
	return (end);
}

static int		spacestart(char const *s)
{
	int		st;

	st = 0;
	while ((s[st]) && (s[st] == ' ' || s[st] == '\n' || s[st] == '\t'))
		st++;
	return (st);
}

char			*ft_strtrim(char const *s)
{
	int		i;
	int		end;
	int		start;
	char	*res;
	int		j;

	i = 0;
	j = 0;
	if (s == NULL)
		return (NULL);
	while (s[i])
		i++;
	end = spacesend(s, --i);
	if (end == -1)
		return (ft_strnew(0));
	start = spacestart(s);
	if (!(res = ft_strnew(i - (start + end) + 1)))
		return (NULL);
	while (start <= i - end)
		res[j++] = s[start++];
	res[j] = '\0';
	return (res);
}
