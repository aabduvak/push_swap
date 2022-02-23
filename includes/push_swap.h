/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabduvak <aabduvak@42istanbul.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 03:15:58 by aabduvak          #+#    #+#             */
/*   Updated: 2022/02/23 07:01:13 by aabduvak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft.h"
# include "ft_printf.h"
# include "get_next_line.h"

typedef struct s_stack
{
	int			top;
	int			capacity;
	int			*array;
}				t_stack;

t_stack	*ft_create_stack(int capacity);

int		ft_is_stack_full(t_stack *Stack);
int		ft_is_stack_empty(t_stack *Stack);
int		ft_pop_stack(t_stack *Stack);

void	ft_push_stack(t_stack *Stack, int item);

#endif