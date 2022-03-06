/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rr_commands.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabduvak <aabduvak@42ISTANBUL.COM.TR>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 17:46:51 by aabduvak          #+#    #+#             */
/*   Updated: 2022/03/06 03:27:35 by aabduvak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

void	rr_helper(int *lst, int len)
{
	int	i;

	if (len < 1)
		return ;
	i = 1;
	while (i < len)
	{
		swap(lst + i, lst + (i - 1));
		i++;
	}
}

void	rra(t_stack *stack)
{
	ft_printf("rra\n");
	rr_helper(stack->a, stack->a_len);
}

void	rrb(t_stack *stack)
{
	ft_printf("rrb\n");
	rr_helper(stack->b, stack->b_len);
}

void	rrr(t_stack *stack)
{
	ft_printf("rrr\n");
	rr_helper(stack->b, stack->b_len);
	rr_helper(stack->a, stack->a_len);
}
