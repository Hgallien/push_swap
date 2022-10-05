#include "push.h"

int	find_min(t_list *a, int min, int last_min)
{
	if (a == NULL)
		return (min);
	if ((*((int *)(a->content))) == ft_min(last_min, *((int *)(a->content))))
		return (find_min(a->next, min, last_min));
	else
		return (find_min(a->next,
				ft_min(min, *((int*)(a->content))), last_min));
	return (0);
}

int	find_next_bottom_max(t_list **a, t_var_push *var, int ta)
{
	int	i;
	int	x;

	x = 1;
	i = ft_lstsize(*a) - 1;
	if (ta % 2 == 0)
	{
		while ((get_indice(var->tab, get_int_lst(get_list_at_pos(a, i)))
				- (var->r_indice - 1)) <= round_up_div(ta))
		{
			i = i - 1;
			x++;
		}
	}	
	else
	{
		while ((get_indice(var->tab, get_int_lst(get_list_at_pos(a, i)))
				- (var->r_indice - 1)) < round_up_div(ta))
		{
			i = i - 1;
			x++;
		}
	}	
	return (x);
}

int	find_next_top_max(t_list **a, t_var_push *var, int ta)
{
	int		i;
	t_list	*temp;

	temp = *a;
	i = 0;
	if (ta % 2 == 0)
	{
		while (get_indice(var->tab, get_int_lst(temp))
			- (var->r_indice - 1) <= round_up_div(ta))
		{
			i++;
			temp = temp->next;
		}
	}
	else
	{
		while (get_indice(var->tab, get_int_lst(temp))
			- (var->r_indice - 1) < round_up_div(ta))
		{
			i++;
			temp = temp->next;
		}
	}
	return (i);
}

int	find_next_bottom(t_list **a, t_var_push *var, int ta)
{
	int	i;
	int	x;

	x = 1;
	i = ft_lstsize(*a) - 1;
	while ((get_indice(var->tab, get_int_lst(get_list_at_pos(a, i)))
			- (var->r_indice - 1)) > ta / 2)
	{
		i = i - 1;
		x++;
	}
	return (x);
}

int	find_next_top(t_list **a, t_var_push *var, int ta)
{
	int		i;
	t_list	*temp;

	temp = *a;
	i = 0;
	while (get_indice(var->tab, get_int_lst(temp))
		- (var->r_indice - 1) > ta / 2)
	{
		i++;
		temp = temp->next;
	}
	return (i);
}
