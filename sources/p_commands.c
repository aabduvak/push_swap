/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   p_commands.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabduvak <aabduvak@42ISTANBUL.COM.TR>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 19:18:48 by aabduvak          #+#    #+#             */
/*   Updated: 2022/03/06 03:26:45 by aabduvak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

void	pb(t_stack *stack)
{
	if (stack->a_len > 0)
	{
		stack->b[stack->b_len++] = stack->a[--stack->a_len];
		ft_printf("pb\n");
	}
}

void	pa(t_stack *stack)
{
	if (stack->b_len > 0)
	{
		stack->a[stack->a_len++] = stack->b[--stack->b_len];
		ft_printf("pa\n");
	}
}
