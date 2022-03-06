/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_middle.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabduvak <aabduvak@42ISTANBUL.COM.TR>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 01:03:00 by aabduvak          #+#    #+#             */
/*   Updated: 2022/03/06 03:05:24 by aabduvak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

void	sort_to_b(t_stack *stack)
{
	int	pivot;

	pivot = average(stack->a, stack->a_len);
	while (is_less_than_average(stack->a, stack->a_len, pivot) && \
		stack->a_len > 1)
	{
		if (top_a(stack) <= pivot)
			pb(stack);
		else
			ra(stack);
	}
	if (top_a(stack) > stack->a[0])
		sa(stack);
	while (stack->a_len > 2)
		sort_to_b(stack);
}

int	is_sorted_reverse(int *lst, int len)
{
	int	i;

	i = len - 1;
	while (i--)
		if (lst[i + 1] > lst[i])
			return (0);
	return (1);
}

void	sort_three(t_stack *stack)
{
	if (is_sorted_reverse(stack->a, stack->a_len))
		return ;
	if (stack->a[1] > stack->a[0] && stack->a[1] > stack->a[2])
	{
		rra(stack);
		if (stack->a[1] < stack->a[2])
			sa(stack);
	}
	else if (stack->a[2] > stack->a[1] && stack->a[2] > stack->a[0])
	{
		ra(stack);
		if (stack->a[1] < stack->a[2])
			sa(stack);
	}
	else if (stack->a[0] > stack->a[1] && stack->a[0] > stack->a[2])
		sa(stack);
}

void	sort_small(t_stack *stack)
{
	sort_to_b(stack);
	while (stack->b_len > 0)
	{
		moveup_b(stack, stack->b[get_max(stack->b, stack->b_len)]);
		pa(stack);
	}
}
