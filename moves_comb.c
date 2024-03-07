/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves_comb.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luyang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 15:44:12 by luyang            #+#    #+#             */
/*   Updated: 2024/01/08 15:44:21 by luyang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_ss(t_list **a, t_list **b)
{
	ft_sa(a, 0);
	ft_sb(b, 0);
	write(1, "ss\n", 3);
}

void	ft_rr(t_list **a, t_list **b)
{
	ft_ra(a, 0);
	ft_rb(b, 0);
	write(1, "rr\n", 3);
}

void	ft_rrr(t_list **a, t_list **b)
{
	ft_rra(a, 0);
	ft_rrb(b, 0);
	write(1, "rrr\n", 4);
}
