/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgallien <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/17 07:55:13 by hgallien          #+#    #+#             */
/*   Updated: 2020/11/30 09:56:37 by hgallien         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	prenum(char *str, int i)
{
	char	*tab;
	int		t;
	int		v;

	t = 0;
	v = 0;
	tab = "\t\n\v\f\r ";
	while (tab[t])
	{
		if (str[i] == tab[t])
		{
			v = 1;
		}
		t++;
	}
	while (v)
	{
		i++;
		v = 0;
		t = 0;
		while (tab[t])
			if (str[i] == tab[t++])
				v = 1;
	}
	return (i);
}

long int	ft_atoi(char *str)
{
	int			i;
	long int	c;
	long int	res;

	res = 0;
	c = 1;
	i = prenum(str, 0);
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			c = c * -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10;
		res = res + (str[i++] - '0');
	}
	res = res * c;
	return (res);
}
