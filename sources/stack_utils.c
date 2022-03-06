/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabduvak <aabduvak@42ISTANBUL.COM.TR>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 06:46:52 by aabduvak          #+#    #+#             */
/*   Updated: 2022/03/06 10:26:10 by aabduvak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

int	*create_int_list(int size)
{
	int	*ret;

	ret = malloc(sizeof(int) * (size + 1));
	if (!ret)
		return (NULL);
	return (ret);
}

t_stack	*ft_create_stack(int size)
{
	t_stack	*stack;

	if (size < 0)
		return (NULL);
	stack = (t_stack *) malloc(sizeof(t_stack));
	stack->a = create_int_list(size);
	stack->b = create_int_list(size);
	stack->a_len = 0;
	stack->b_len = 0;
	return (stack);
}

void	free_stack(t_stack *stack)
{
	free(stack->a);
	free(stack->b);
	free(stack);
}

void	free_char(char **str, int len)
{
	int	i;

	i = 0;
	while (i < len)
		free(str[i++]);
	free(str);
}
