#include "libft.h"
#include "push.h"

void	sa(t_list **a)
{
	t_list	*temp;

	printf("sa\n");
	temp = *a;
	*a = (*a)->next;
	temp->next = (*a)->next;
	(*a)->next = temp;
}

void	pa(t_list **a, t_list **b)
{
	t_list	*temp;

	printf("pa\n");
	temp = (*b)->next;
	ft_lstadd_front(a, *b);
	*b = temp;
}

void	ra(t_list **a)
{
	t_list	*temp;

	printf("ra\n");
	temp = *a;
	(*a) = (*a)->next;
	temp->next = NULL;
	ft_lstadd_back(a, temp);
}

void	rra(t_list **a)
{
	t_list	*temp;

	printf("rra\n");
	if (*a == NULL || (*a)->next == NULL)
		return ;
	temp = *a;
	while (temp->next->next != NULL)
		temp = temp->next;
	ft_lstadd_front(a, temp->next);
	temp->next = NULL;
}
