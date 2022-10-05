#include "libft.h"
#include "push.h"

void	ss(t_list **a, t_list **b)
{
	t_list	*temp;

	printf("ss\n");
	temp = *a;
	*a = (*a)->next;
	temp->next = (*a)->next;
	(*a)->next = temp;
	temp = *b;
	*b = (*b)->next;
	temp->next = (*b)->next;
	(*b)->next = temp;
}

void	rr(t_list **a, t_list **b)
{
	t_list	*temp;

	temp = *a;
	(*a) = (*a)->next;
	temp->next = NULL;
	ft_lstadd_back(a, temp);
	temp = *b;
	(*b) = (*b)->next;
	temp->next = NULL;
	ft_lstadd_back(b, temp);
	printf("rr\n");
}

int	n_rr(t_list **a, t_list **b, int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		rr(a, b);
		i++;
	}
	return (n);
}

int	n_rrr(t_list **a, t_list **b, int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		rrr(a, b);
		i++;
	}
	return (n);
}

void	rrr(t_list **a, t_list **b)
{
	t_list	*temp;

	if (*a == NULL || (*a)->next == NULL)
		return ;
	temp = *a;
	while (temp->next->next != NULL)
		temp = temp->next;
	ft_lstadd_front(a, temp->next);
	temp->next = NULL;
	if (*b == NULL || (*b)->next == NULL)
		return ;
	temp = *b;
	while (temp->next->next != NULL)
		temp = temp->next;
	ft_lstadd_front(b, temp->next);
	temp->next = NULL;
	printf("rrr\n");
}
