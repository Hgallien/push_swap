#include "libft.h"
#include "push.h"

void	little_sort(t_list **a)
{
	if (is_sorted_nb(*a, 3))
		return ;
	if (get_int_lst(*a) > get_int_lst((*a)->next))
		sa(a);
	if (is_sorted_nb(*a, 3))
		return ;
	rra(a);
	if (is_sorted_nb(*a, 3))
		return ;
	sa(a);
}
