#include "libft.h"
#include "push.h"

void	push_x(t_list **a, t_list **b, t_var_push *var, int ta)
{
	int	i;

	(void)var;
	i = 0;
	while (i < ta)
	{
		if (var->name == 'a')
			pb(a, b);
		else
			pa(a, b);
		i++;
	}
}

void	double_swap(t_list **a, t_list **b, t_var_push *var, int ta)
{
	(void)var;
	(void)ta;
	if ((get_int_lst(*b) < get_int_lst((*b)->next))
		&& get_int_lst(*a) > get_int_lst((*a)->next))
		ss(a, b);
}
