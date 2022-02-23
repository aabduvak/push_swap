/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_utils.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabduvak <aabduvak@42istanbul.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 06:46:52 by aabduvak          #+#    #+#             */
/*   Updated: 2022/02/23 06:47:22 by aabduvak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/**
 * @file ft_stack.c
 * @author Abdulaziz Abduvakhobov (abdulaziz.yosk@gmail.com)
 * @brief The function ft_create_stack() creates new stack and returns it
 * 
 * @param capacity - The size of stack
 * @return t_stack* - The stack
 * 
 * @version 1.0.1
 * @date 2022-01-30
 * 
 * @copyright Copyright (c) 2022 
 */

t_stack	*ft_create_stack(int capacity)
{
	t_stack	*stack;

	if (capacity < 0)
		return (NULL);
	stack = (t_stack *) malloc(sizeof(t_stack));
	stack->top = -1;
	stack->capacity = capacity;
	stack->array = (int *) malloc(sizeof(int) * stack->capacity);
	return (stack);
}

/**
 * @file ft_stack.c
 * @author Abdulaziz Abduvakhobov (abdulaziz.yosk@gmail.com)
 * @brief The function ft_is_full() checks the stack and if it is full
 * returns 1, otherwise 0.
 * 
 * @param stack - The stack
 * @return  1 or 0 - True or False
 * 
 * @version 1.0.1
 * @date 2022-01-30
 * 
 * @copyright Copyright (c) 2022 
 */

int	ft_is_stack_full(t_stack *stack)
{
	return (stack->capacity - 1 == stack->top);
}

/**
 * @file ft_stack.c
 * @author Abdulaziz Abduvakhobov (abdulaziz.yosk@gmail.com)
 * @brief The function ft_is_empty() checks the stack and if it is empty
 * returns 1, otherwise 0.
 * 
 * @param stack - The stack
 * @return  1 or 0 - True or False
 * 
 * @version 1.0.1
 * @date 2022-01-30
 * 
 * @copyright Copyright (c) 2022 
 */

int	ft_is_stack_empty(t_stack *stack)
{
	return (stack->top == -1);
}

/**
 * @file ft_stack.c
 * @author Abdulaziz Abduvakhobov (abdulaziz.yosk@gmail.com)
 * @brief The function ft_push() sets given item to the stack
 * 
 * @param stack - The stack
 * @param item - the data
 * 
 * @version 1.0.1
 * @date 2022-01-30
 * 
 * @copyright Copyright (c) 2022 
 */

void	ft_push_stack(t_stack *stack, int item)
{
	if (ft_is_stack_full(stack))
		return ;
	stack->array[++stack->top] = item;
}

/**
 * @file ft_stack.c
 * @author Abdulaziz Abduvakhobov (abdulaziz.yosk@gmail.com)
 * @brief The function ft_pop() removes last item from the stack
 * 
 * @param stack - The stack
 * @return  stack's last item if successfull, otherwise -1
 * 
 * @version 1.0.1
 * @date 2022-01-30
 * 
 * @copyright Copyright (c) 2022 
 */

int	ft_pop_stack(t_stack *stack)
{
	if (ft_is_stack_empty(stack))
		return (-1);
	return (stack->array[stack->top--]);
}
