/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_handling.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabduvak <aabduvak@42ISTANBUL.COM.TR>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 05:34:53 by aabduvak          #+#    #+#             */
/*   Updated: 2022/03/06 04:59:24 by aabduvak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

void	error(t_stack *stack)
{
	ft_printf("Error\n");
	free_stack(stack);
	exit(1);
}

void	error_without_message(t_stack *stack)
{
	free_stack(stack);
	exit(1);
}

int	check_dup(int *lst, int len)
{
	int	i;
	int	j;

	i = 0;
	while (i < len)
	{
		j = 0;
		while (j < len)
		{
			if (j != i && lst[i] == lst[j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int	check_args(int argc, char **argv)
{
	int		i;
	char	*arg;

	i = 1;
	while (i < argc)
	{
		arg = argv[i++];
		while (*arg)
		{
			if (!ft_isdigit((int)*arg) && *arg != '-')
				return (0);
			arg++;
		}
	}
	return (1);
}
