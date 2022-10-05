#include "push.h"

int	get_int_lst(t_list *a)
{
	return (*((int *)(a->content)));
}

int 	get_indice(int *tab, int x)
{
	int	i;

	i = 0;
	while (tab[i] != x)
		i++;
	return (i);
}

t_list	*get_list_at_pos(t_list **a, int i)
{
	int		x;
	t_list	*temp;

	temp = *a;
	x = 0;
	while (x != i && temp != NULL)
	{
		x++;
		temp = temp->next;
	}
	return (temp);
}

int	get_min_indice(t_list **a, t_var_push *var, int ta)
{
	t_list	*tmp;
	int		min;
	int		i;

	i = 0;
	min = INT_MAX;
	tmp = *a;
	while (tmp != NULL && i < ta)
	{
		if (get_indice(var->tab, get_int_lst(tmp)) < min)
			min = get_indice(var->tab, get_int_lst(tmp));
		tmp = tmp->next;
		i++;
	}
	return (min);
}
