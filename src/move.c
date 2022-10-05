#include "push.h"

void	move_next(t_list **a, t_list **b, t_var_push *var, int ta)
{
	int	top;
	int	bot;

	top = find_next_top(a, var, ta);
	bot = find_next_bottom(a, var, ta);
	if (top < bot)
	{
		var->restore_a = var->restore_a + top;
		move_next_top(top, a, b);
	}
	else
		move_next_bot(bot, a, b);
}

void	move_next_max(t_list **a, t_list **b, t_var_push *var, int ta)
{
	int	top;
	int	bot;

	top = find_next_top_max(b, var, ta);
	bot = find_next_bottom_max(b, var, ta);
	if (top < bot)
	{
		var->restore_b = var->restore_b + top;
		move_next_top_max(top, a, b);
	}
	else
		move_next_bot_max(bot, a, b);
}
