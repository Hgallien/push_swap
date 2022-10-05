#include "push.h"

void	move_next_top_max(int t, t_list **a, t_list **b)
{
	int	x;

	x = 0;
	while (x < t)
	{
		rb(b);
		x++;
	}
	pa(a, b);
}

void	move_next_bot_max(int t, t_list **a, t_list **b)
{
	int	x;

	x = 0;
	while (x < t)
	{
		rrb(b);
		x++;
	}
	pa(a, b);
}

void	move_next_top(int t, t_list **a, t_list **b)
{
	int	x;

	x = 0;
	while (x < t)
	{
		ra(a);
		x++;
	}
	pb(a, b);
}

void	move_next_bot(int t, t_list **a, t_list **b)
{
	int	x;

	x = 0;
	while (x < t)
	{
		rra(a);
		x++;
	}
	pb(a, b);
}
