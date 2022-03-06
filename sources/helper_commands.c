/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helper_commands.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabduvak <aabduvak@42ISTANBUL.COM.TR>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 19:23:12 by aabduvak          #+#    #+#             */
/*   Updated: 2022/03/06 03:04:01 by aabduvak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

int	top_a(t_stack *stack)
{
	return (stack->a[stack->a_len - 1]);
}

int	top_b(t_stack *stack)
{
	return (stack->b[stack->b_len - 1]);
}

void	swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
