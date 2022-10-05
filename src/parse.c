#include "push.h"

int	test_arg(char *str)
{
	int	i;

	i = 0;
	if (ft_atoi(str) > 2147483647 || ft_atoi(str) < -2147483648)
		return (1);
	while (str[i] == ' ')
		i++;
	if (str[i] == '-')
		i++;
	while (str[i])
	{
		if (!ft_isdigit(str[i]))
			return (1);
		i++;
	}
	return (0);
}

int	is_int_lst(t_list *l, int x)
{
	if (l == NULL)
		return (0);
	if (get_int_lst(l) == x)
		return (1);
	return (is_int_lst(l->next, x));
}

void	recur_free(t_list *a)
{
	if (a == NULL)
		return ;
	recur_free(a->next);
	free(a->content);
	free(a);
}

int	clean_exit(t_list **a)
{
	recur_free(*a);
	printf("Error\n");
	return (0);
}
