/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgallien <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 17:21:06 by hgallien          #+#    #+#             */
/*   Updated: 2020/11/25 13:31:15 by hgallien         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t		x;
	void		*res;

	x = 0;
	res = malloc(count * size);
	if (res == NULL)
		return (res);
	while (x < count * size)
	{
		((unsigned char *)res)[x] = 0;
		x++;
	}
	return (res);
}
