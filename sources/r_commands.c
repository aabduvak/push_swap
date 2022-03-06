/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   r_commands.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabduvak <aabduvak@42ISTANBUL.COM.TR>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 19:06:56 by aabduvak          #+#    #+#             */
/*   Updated: 2022/03/06 03:27:20 by aabduvak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

void	r_helper(int *lst, int len)
{
	int	i;

	if (len < 1)
		return ;
	i = len - 1;
	while (i > 0)
	{
		swap(lst + i, lst + (i - 1));
		i--;
	}
}

void	ra(t_stack *stack)
{
	ft_printf("ra\n");
	r_helper(stack->a, stack->a_len);
}

void	rb(t_stack *stack)
{
	ft_printf("rb\n");
	r_helper(stack->b, stack->b_len);
}

void	rr(t_stack *stack)
{
	ft_printf("rr\n");
	r_helper(stack->a, stack->a_len);
	r_helper(stack->b, stack->b_len);
}
