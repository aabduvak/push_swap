/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s_commands.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabduvak <aabduvak@42ISTANBUL.COM.TR>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 18:11:00 by aabduvak          #+#    #+#             */
/*   Updated: 2022/03/06 03:27:51 by aabduvak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

void	s_helper(int *lst, int len)
{
	if (len >= 2)
		swap(lst + len - 1, lst + len - 2);
}

void	sa(t_stack *stack)
{
	if (stack->a_len >= 2)
	{
		s_helper(stack->a, stack->a_len);
		ft_printf("sa\n");
	}
}

void	sb(t_stack *stack)
{
	if (stack->b_len >= 2)
	{
		s_helper(stack->b, stack->b_len);
		ft_printf("sb\n");
	}
}

void	ss(t_stack *stack)
{
	s_helper(stack->b, stack->b_len);
	s_helper(stack->a, stack->a_len);
	ft_printf("ss\n");
}
