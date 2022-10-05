#include "push.h"

void	a_part(t_list **a, t_list **b, t_var_push *var, int ta)
{
	t_var_push	n_var;

	if (!(is_sorted_nb(*a, ta)))
	{
		cut_a(a, b, var, ta);
		if (ta / 2 <= 3 && round_up_div(ta) <= 3 && ta / 2 > 1)
			double_swap(a, b, var, ta);
		solver(a, b, set_var(&n_var, var, 'a', 0), round_up_div(ta));
		solver(a, b, set_var(&n_var, var, 'b', 1), ta / 2);
	}
}
