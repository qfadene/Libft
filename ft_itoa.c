/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qfadene <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 16:49:17 by qfadene           #+#    #+#             */
/*   Updated: 2018/11/14 19:40:47 by qfadene          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		size(long n)
{
	int countc;

	countc = 2;
	if (n < 0)
	{
		n = n * -1;
		countc++;
	}
	while (n >= 10)
	{
		n = n / 10;
		countc++;
	}
	return (countc);
}

char			*ft_itoa(int n)
{
	int		countc;
	long	nb;
	int		j;
	char	*res;

	nb = n;
	countc = size(nb);
	if (!(res = ft_strnew(countc - 1)))
		return (NULL);
	j = countc - 2;
	if (nb < 0)
		nb = nb * -1;
	while (j >= 0)
	{
		res[j] = '0' + (nb % 10);
		nb = nb / 10;
		j--;
	}
	if (n < 0)
		res[0] = '-';
	res[countc - 1] = '\0';
	return (res);
}
