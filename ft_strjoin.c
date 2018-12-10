/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qfadene <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 13:10:01 by qfadene           #+#    #+#             */
/*   Updated: 2018/12/06 10:19:04 by qfadene          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*tab;
	int		i;
	int		j;

	if (!s1 || !s2)
		return (NULL);
	tab = NULL;
	i = ft_strlen(s1);
	j = ft_strlen(s2);
	if (!(tab = (char*)malloc(sizeof(char) * (i + j + 1))))
		return (NULL);
	ft_strcpy(tab, s1);
	ft_strcat(tab, s2);
	return (tab);
}
