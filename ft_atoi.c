/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qfadene <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 17:05:42 by qfadene           #+#    #+#             */
/*   Updated: 2018/11/16 15:05:40 by qfadene          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(const char *str)
{
	int i;
	int signe;
	int res;

	i = 0;
	signe = 1;
	res = 0;
	while (str[i] == ' ' || str[i] == '\f' || str[i] == '\t' ||
			str[i] == '\n' || str[i] == '\r' || str[i] == '\v')
		i++;
	if ((str[i] == '-' && str[i + 1] > 47 && str[i + 1] < 58) ||
			(str[i] == '+' && str[i + 1] > 47 && str[i + 1] < 58))
	{
		if (str[i] == '-')
			signe = signe * -1;
		i++;
	}
	while (str[i] > 47 && str[i] < 58)
	{
		res = (res * 10) + (str[i] - 48);
		i++;
	}
	res = res * signe;
	return (res);
}
