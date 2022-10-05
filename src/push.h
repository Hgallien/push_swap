/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgallien <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 15:10:45 by hgallien          #+#    #+#             */
/*   Updated: 2021/06/01 14:59:44 by hgallien         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#ifndef PUSH_H
# define PUSH_H
# include "libft.h"
# include <limits.h>

typedef struct s_etat
{
	int	sorted_a;
	int	full_a;
	int	sorted_b;
	int	full_b;
}			t_etat;

typedef struct s_var_push
{
	int		t;
	int		*tab;
	t_list	*history;
	int		back;
	char	name;
	int		restore_b;
	int		restore_a;
	int		r_indice;
}				t_var_push;

void		little_sort(t_list **a);
void		solver(t_list **a, t_list **b, t_var_push *var, int ta);
void		a_part(t_list **a, t_list **b, t_var_push *var, int ta);
int			n_rr(t_list **a, t_list **b, int n);
int			n_rrr(t_list **a, t_list **b, int n);
int			doublette(t_list **a, t_list **b, t_var_push *var, int ta);
void		push_x(t_list **a, t_list **b, t_var_push *var, int ta);
void		double_swap(t_list **a, t_list **b, t_var_push *var, int ta);
int			test_arg(char *str);
int			is_int_lst(t_list *l, int x);
void		recur_free(t_list *a);
int			clean_exit(t_list **a);
int			is_sorted(t_list *a);
int			is_sorted_nb(t_list *a, int nb);
int			is_sorted_r(t_list *a);
int			is_sorted_r_nb(t_list *a, int nb);
void		init_etat(t_etat *e);
int			round_up_div(int i);
int			ft_min(int a, int b);
void		fill_tab(t_list *a, t_var_push *var);
int			str_to_int(char *s);
int			get_int_lst(t_list *a);
t_var_push	*set_var(t_var_push *var, t_var_push *old_var, char name, int back);
int			find_next_bottom(t_list **a, t_var_push *var, int ta);
int			find_next_bottom_max(t_list **a, t_var_push *var, int ta);
int			get_indice(int *tab, int x);
t_list		*get_list_at_pos(t_list **a, int i);
int			get_min_indice(t_list **a, t_var_push *var, int ta);
int			find_next_top(t_list **a, t_var_push *var, int ta);
int			find_next_top_max(t_list **a, t_var_push *var, int ta);
int			find_min(t_list *a, int min, int last_min);
void		fill_b(t_list **b, t_list **a, t_var_push *var, int ta);
void		fill_a(t_list **b, t_list **a, t_var_push *var, int ta);
void		cut_b(t_list **a, t_list **b, t_var_push *var, int ta);
void		cut_a(t_list **a, t_list **b, t_var_push *var, int ta);
void		sort_low(t_list **a, t_list **b, t_var_push *var, int ta);
void		move_next_top_max(int t, t_list **a, t_list **b);
void		move_next_bot_max(int t, t_list **a, t_list **b);
void		move_next_max(t_list **a, t_list **b, t_var_push *var, int ta);
void		move_next_top(int t, t_list **a, t_list **b);
void		move_next_bot(int t, t_list **a, t_list **b);
void		move_next(t_list **a, t_list **b, t_var_push *var, int ta);
void		move_next_bis(t_list **a, t_list **b, t_var_push *var, int ta);
void		print_lst(char *c, t_list *a);
void		print_tab(int *tab, int t);
void		sa(t_list **a);
void		pa(t_list **a, t_list **b);
void		ra(t_list **a);
void		rra(t_list **a);
void		sb(t_list **b);
void		pb(t_list **a, t_list **b);
void		rb(t_list **b);
void		rrb(t_list **b);
void		ss(t_list **a, t_list **b);
void		rrr(t_list **a, t_list **b);
void		rr(t_list **a, t_list **b);
#endif
