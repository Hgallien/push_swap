#include "push.h"

void	fill_b(t_list **b, t_list **a, t_var_push *var, int ta)
{
	if ((get_indice(var->tab, get_int_lst(*a))
			- (var->r_indice - 1)) <= ta / 2)
		pb(a, b);
	else
		move_next(a, b, var, ta);
}

void	fill_a(t_list **b, t_list **a, t_var_push *var, int ta)
{
	if (ta % 2 == 0)
	{
		if ((get_indice(var->tab, get_int_lst(*b))
				- (var->r_indice - 1)) > round_up_div(ta))
			pa(a, b);
		else
			move_next_max(a, b, var, ta);
	}
	else
	{
		if ((get_indice(var->tab, get_int_lst(*b))
				- (var->r_indice - 1)) >= round_up_div(ta))
			pa(a, b);
		else
			move_next_max(a, b, var, ta);
	}
}
