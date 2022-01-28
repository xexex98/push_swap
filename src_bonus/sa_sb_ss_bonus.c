/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa_sb_ss_bonus.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarra <mbarra@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 18:22:05 by mbarra            #+#    #+#             */
/*   Updated: 2022/01/28 20:29:59 by mbarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	sa(t_ps *ps)
{
	int	temp;

	if (ps->a_len >= 2)
	{
		temp = ps->stack_a[0];
		ps->stack_a[0] = ps->stack_a[1];
		ps->stack_a[1] = temp;
		ft_putstr("sa\n");
	}
	else
		return ;
}

void	sb(t_ps *ps)
{
	int	temp;

	if (ps->b_len >= 2)
	{
		temp = ps->stack_b[0];
		ps->stack_b[0] = ps->stack_b[1];
		ps->stack_b[1] = temp;
		ft_putstr("sb\n");
	}
	else
		return ;
}

void	ss(t_ps *ps)
{
	int	temp;

	if (ps->a_len >= 2 || ps->b_len >= 2)
	{
		if (ps->a_len >= 2)
		{
			temp = ps->stack_a[0];
			ps->stack_a[0] = ps->stack_a[1];
			ps->stack_a[1] = temp;
		}
		if (ps->b_len >= 2)
		{
			temp = ps->stack_b[0];
			ps->stack_b[0] = ps->stack_b[1];
			ps->stack_b[1] = temp;
		}
		ft_putstr("ss\n");
	}
	else
		return ;
}