/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   math.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabduvak <aabduvak@42ISTANBUL.COM.TR>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 21:22:00 by aabduvak          #+#    #+#             */
/*   Updated: 2022/03/03 01:57:03 by aabduvak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

int	get_min(int *lst, int len)
{
	int	i;
	int	num;

	num = lst[len - 1];
	i = len;
	while (i--)
		if (num > lst[i])
			num = lst[i];
	return (get_index(lst, len, num));
}

int	get_max(int *lst, int len)
{
	int	i;
	int	num;

	num = lst[len - 1];
	i = len;
	while (i--)
		if (num < lst[i])
			num = lst[i];
	return (get_index(lst, len, num));
}

int	average(int *lst, int len)
{
	int	ret;
	int	i;

	i = 0;
	ret = 0;
	while (i < len)
		ret += lst[i++];
	return (ret / len);
}

int	is_less_than_average(int *lst, int len, int pivot)
{
	int	i;

	i = 0;
	while (i < len)
		if (lst[i++] < pivot)
			return (1);
	return (0);
}
