/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qfadene <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 18:31:47 by qfadene           #+#    #+#             */
/*   Updated: 2018/11/15 11:51:47 by qfadene          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		countword(char const *str, char c)
{
	int i;
	int word;

	i = 0;
	word = 0;
	if (str == NULL)
		return (-1);
	if (str[0] != c)
		word++;
	while (str[i] != '\0')
	{
		if ((i > 0 && (str[i - 1] == c) && (str[i] != c)))
			word++;
		i++;
	}
	return (word);
}

static int		countletter(char const *str, int i, char c)
{
	int letter;

	letter = 0;
	while (str[i] && str[i] != c)
	{
		letter++;
		i++;
	}
	return (letter);
}

char			**ft_strsplit(char const *str, char c)
{
	char	**tabres;
	int		i;
	int		curword;
	int		curletter;
	int		save;

	curword = -1;
	i = 0;
	save = 0;
	if (!(tabres = (char**)malloc(sizeof(char*) * (countword(str, c) + 1))))
		return (NULL);
	while ((curword < countword(str, c)) && (str[i] != 0))
	{
		curletter = 0;
		while (str[i] && (str[i] == c))
			i++;
		save = countletter(str, i, c);
		if (!(tabres[++curword] = ft_strnew(save)))
			return (NULL);
		while (curletter < save)
			tabres[curword][curletter++] = str[i++];
		tabres[curword][curletter] = '\0';
	}
	tabres[countword(str, c)] = 0;
	return (tabres);
}
