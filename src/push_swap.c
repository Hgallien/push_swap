#include "libft.h"
#include "push.h"

void	solver(t_list **a, t_list **b, t_var_push *var, int ta)	
{
	t_var_push	n_var;

	if (ta <= 3)
		sort_low(a, b, var, ta);
	else
	{
		if (var->name == 'a')
			a_part(a, b, var, ta);
		else
		{	
			if (!(is_sorted_r_nb(*b, ta)))
			{
				cut_b(a, b, var, ta);
				if (ta / 2 <= 3 && round_up_div(ta) <= 3 && ta / 2 > 1)
					double_swap(a, b, var, ta);
				solver(a, b, set_var(&n_var, var, 'b', 0), (ta / 2));
				solver(a, b, set_var(&n_var, var, 'a', 1), round_up_div(ta));
			}
		}
	}
	if (var->back)
		push_x(a, b, set_var(&n_var, var, var->name, 0), ta);
}

void	cut_b(t_list **a, t_list **b, t_var_push *var, int ta)
{
	int	i;

	i = 0;
	var->r_indice = get_min_indice(b, var, ta);
	var->restore_b = 0;
	while (i < round_up_div(ta))
	{
		fill_a(b, a, var, ta);
		i++;
	}
	if (var->restore_b != 0 && ta < round_up_div(var->t))
	{
		i = 0;
		while (i < var->restore_b)
		{
			rrb(b);
			i++;
		}
	}
}

void	cut_a(t_list **a, t_list **b, t_var_push *var, int ta)
{
	int	i;

	i = 0;
	var->r_indice = get_min_indice(a, var, ta);
	var->restore_a = 0;
	while (i < (ta / 2))
	{
		fill_b(b, a, var, ta);
		i++;
	}
	if (var->restore_a != 0 && ta < round_up_div(var->t))
	{
		i = 0;
		while (i < var->restore_a)
		{
			rra(a);
			i++;
		}
	}
}

void	push_swap(t_list **a)
{
	t_list		*b;
	t_var_push	var;

	b = NULL;
	var.t = ft_lstsize(*a);
	var.tab = malloc(sizeof(int) * var.t + 1);
	fill_tab(*a, &var);
	var.name = 'a';
	var.back = 0;
	solver(a, &b, &var, var.t);
	free(var.tab);
	recur_free(b);
}

int	main(int ag, char *av[])
{
	int		i;
	t_list	*a;

	a = NULL;
	i = 1;
	if (ag == 1)
		return (0);
	while (i < ag)
	{
		if (test_arg(av[i]) || is_int_lst(a, ft_atoi(av[i])))
			return (clean_exit(&a));
		ft_lstadd_back(&a, ft_lstnew_int(ft_atoi(av[i])));
		i++;
	}
	if (ft_lstsize(a) == 3)
		little_sort(&a);
	else
		push_swap(&a);
	recur_free(a);
}
