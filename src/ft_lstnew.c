/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgallien <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 11:19:00 by hgallien          #+#    #+#             */
/*   Updated: 2021/04/08 15:13:51 by hgallien         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew_int(int i)
{
	t_list	*t;
	int		*new;

	new = malloc(sizeof(int *));
	*new = i;
	t = malloc(sizeof(t_list *));
	if (!(t))
		return (NULL);
	t->content = new;
	t->next = 0;
	return (t);
}

t_list	*ft_lstnew(void *content)
{
	t_list	*l;

	l = malloc(sizeof(t_list));
	if (l == NULL)
		return (NULL);
	l->content = content;
	l->next = NULL;
	return (l);
}
