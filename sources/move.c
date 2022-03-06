/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabduvak <aabduvak@42ISTANBUL.COM.TR>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 00:57:02 by aabduvak          #+#    #+#             */
/*   Updated: 2022/03/03 01:44:19 by aabduvak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

int	moveup_a(t_stack *stack, int num)
{
	int	index;

	index = get_index(stack->a, stack->a_len, num);
	while (top_a(stack) != num && stack->a_len > 1)
	{
		if (index < stack->a_len / 2)
			rra(stack);
		else
			ra(stack);
	}
	return (0);
}

int	moveup_b(t_stack *stack, int num)
{
	int	index;

	index = get_index(stack->b, stack->b_len, num);
	while (top_b(stack) != num && stack->b_len > 1)
	{
		if (index < stack->b_len / 2)
			rrb(stack);
		else
			rb(stack);
	}
	return (0);
}
