/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgallien <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 14:49:21 by hgallien          #+#    #+#             */
/*   Updated: 2020/11/27 16:31:20 by hgallien         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void*))
{
	t_list	*res;
	t_list	*temp;

	if (lst)
	{
		res = ft_lstnew(f(lst->content));
		if (!(res))
			return (NULL);
		temp = lst->next;
		while (temp)
		{
			ft_lstadd_back(&res, ft_lstnew(f(temp->content)));
			if (ft_lstlast(res) == NULL)
			{
				ft_lstclear(&res, del);
				return (NULL);
			}
			temp = temp->next;
		}
		return (res);
	}
	else
		return (NULL);
}
