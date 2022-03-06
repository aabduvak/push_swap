/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabduvak <aabduvak@42ISTANBUL.COM.TR>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 01:57:45 by aabduvak          #+#    #+#             */
/*   Updated: 2022/03/06 03:05:05 by aabduvak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

int	get_pos(t_stack *stack, int num)
{
	int	j;
	int	i;
	int	max;
	int	tmp;

	if (!stack->a_len)
		return (1);
	max = INT_MIN;
	j = -1;
	i = -1;
	while (++i < stack->a_len)
	{
		tmp = num - stack->a[i];
		if (tmp < 0 && tmp > max)
		{
			j = i;
			max = tmp;
		}
	}
	if (j == -1)
		j = get_min(stack->a, stack->a_len);
	return (j);
}

void	find_least_process(t_stack *stack, int *i, int *j)
{
	int	tmp[2];
	int	m;
	int	n;
	int	min;

	min = INT_MAX;
	m = stack->b_len;
	while (--m >= 0)
	{
		n = get_pos(stack, stack->b[m]);
		if (m + 1 > stack->b_len - m - 1)
			tmp[0] = stack->b_len - m - 1;
		else
			tmp[0] = m + 1;
		if (n > stack->a_len - n)
			tmp[1] = stack->a_len - n;
		else
			tmp[1] = n;
		if (tmp[0] + tmp[1] < min)
		{
			min = tmp[0] + tmp[1];
			*i = m;
			*j = n;
		}
	}
}

void	sort(t_stack *stack)
{
	int	i;
	int	j;

	sort_to_b(stack);
	while (stack->b_len > 0)
	{
		find_least_process(stack, &i, &j);
		moveup_b(stack, stack->b[i]);
		moveup_a(stack, stack->a[j]);
		pa(stack);
	}
	moveup_a(stack, stack->a[get_min(stack->a, stack->a_len)]);
}
