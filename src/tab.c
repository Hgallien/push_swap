#include "push.h"

int 	str_to_int(char *s)
{
	int	r;
	int	i;

	r = 0;
	i = 0;
	while (s[i])
	{
		r = r * 10;
		r = r + s[i] - '0';
		i++;
	}
	return (r);
}

void	fill_tab(t_list *a, t_var_push *var)
{
	int	last_min;
	int	i;

	last_min = INT_MIN;
	i = 1;
	var->tab[0] = INT_MAX;
	while (i <= var->t)
	{
		var->tab[i] = find_min(a, INT_MAX, last_min);
		last_min = var->tab[i];
		i++;
	}
}
