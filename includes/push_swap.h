/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabduvak <aabduvak@42ISTANBUL.COM.TR>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 03:15:58 by aabduvak          #+#    #+#             */
/*   Updated: 2022/03/06 12:43:27 by aabduvak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft.h"
# include "ft_printf.h"
# include "get_next_line.h"
# include <limits.h>

typedef struct s_stack
{
	int			*a;
	int			*b;
	int			a_len;
	int			b_len;
}				t_stack;

// stack utils
t_stack	*ft_create_stack(int capacity);
void	free_stack(t_stack *stack);
void	fill_stack(t_stack *stack, int *lst, int len);
void	print_stack(t_stack *stack);
void	free_char(char **str, int len);
char	*take_args(int argc, char **argv);
int		args_count(int argc, char **argv);
void	init_stack(t_stack *stack, int argc, char **argv);
int		has_space(char *str);

// helper functions
int		*copy(int *lst, int len);
int		new_atoi(const char *str, t_stack *stack);
int		get_index(int *lst, int len, int num);

// math functions
int		get_min(int *lst, int len);
int		get_max(int *lst, int len);
int		average(int *lst, int len);
int		is_less_than_average(int *lst, int len, int pivot);

// helper commands
void	swap(int *a, int *b);
int		top_a(t_stack *stack);
int		top_b(t_stack *stack);

// move functions
int		moveup_a(t_stack *stack, int num);
int		moveup_b(t_stack *stack, int num);

// sort functions
void	sort_to_b(t_stack *stack);
void	sort_small(t_stack *stack);
void	sort_three(t_stack *stack);
int		is_sorted_reverse(int *lst, int len);
void	sort(t_stack *stack);

// error handling
int		check_dup(int *lst, int len);
int		check_args(int argc, char **argv);
void	error_without_message(t_stack *stack);
void	error(t_stack *stack);

// commands
void	sa(t_stack *stack);
void	sb(t_stack *stack);
void	ss(t_stack *stack);

void	ra(t_stack *stack);
void	rb(t_stack *stack);
void	rr(t_stack *stack);

void	rra(t_stack *stack);
void	rrb(t_stack *stack);
void	rrr(t_stack *stack);

void	pa(t_stack *stack);
void	pb(t_stack *stack);

#endif