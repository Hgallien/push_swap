#include "push.h"

int	is_sorted_nb(t_list *a, int nb)
{
	if (a->next == NULL || nb == 0)
		return (1);
	if (get_int_lst(a) > get_int_lst(a->next))
		return (0);
	return (is_sorted_nb(a->next, nb - 1));
}

int	is_sorted_r_nb(t_list *a, int nb)
{
	if (a->next == NULL || nb == 0)
		return (1);
	if (get_int_lst(a) < get_int_lst(a->next))
		return (0);
	return (is_sorted_r_nb(a->next, nb - 1));
}

void	sort_low_three(t_list **a, t_list **b, t_var_push *var, int ta)
{
	(void)ta;
	if (var->name == 'b' && !is_sorted_r_nb(*b, 3))
	{
		pa(a, b);
		sb(b);
		pb(a, b);
		if (!is_sorted_r_nb(*b, 3))
			sb(b);
	}
	else if (var->name == 'a' && !is_sorted_nb(*a, 3))
	{
		pb(a, b);
		sa(a);
		pa(a, b);
		if (!is_sorted_nb(*a, 3))
			sa(a);
	}
}

void	sort_low(t_list **a, t_list **b, t_var_push *var, int ta)
{
	(void)ta;
	if (ta <= 1)
		return ;
	if (ta >= 2)
	{
		if (var->name == 'b' && get_int_lst(*b) < get_int_lst((*b)->next))
			sb(b);
		else if (var->name == 'a' && get_int_lst(*a) > get_int_lst((*a)->next))
			sa(a);
	}
	if (ta == 3)
		sort_low_three(a, b, var, ta);
}
