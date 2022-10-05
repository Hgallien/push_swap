#include "libft.h"
#include "push.h"

void	sb(t_list **b)
{
	t_list	*temp;

	printf("sb\n");
	temp = *b;
	*b = (*b)->next;
	temp->next = (*b)->next;
	(*b)->next = temp;
}

void	pb(t_list **a, t_list **b)
{
	t_list	*temp;

	printf("pb\n");
	temp = *a;
	*a = (*a)->next;
	ft_lstadd_front(b, temp);
}

void	rb(t_list **b)
{
	t_list	*temp;

	printf("rb\n");
	temp = *b;
	*b = (*b)->next;
	temp->next = NULL;
	ft_lstadd_back(b, temp);
}

void	rrb(t_list **b)
{
	t_list	*temp;

	printf("rrb\n");
	if (*b == NULL || (*b)->next == NULL)
		return ;
	temp = *b;
	while (temp->next->next != NULL)
		temp = temp->next;
	ft_lstadd_front(b, temp->next);
	temp->next = NULL;
}
