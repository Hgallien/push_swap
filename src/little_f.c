#include "push.h"

int	ft_min(int a, int b)
{
	if (a > b)
		return (b);
	else
		return (a);
}

t_var_push	*set_var(t_var_push *var, t_var_push *old_var, char name, int back)
{
	var->t = old_var->t;
	var->tab = old_var->tab;
	var->back = back;
	var->name = name;
	return (var);
}

int	round_up_div(int i)
{
	return ((i + i % 2) / 2);
}
