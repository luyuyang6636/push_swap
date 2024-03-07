/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_initial_stack_a.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luyang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 15:38:55 by luyang            #+#    #+#             */
/*   Updated: 2024/01/08 15:38:57 by luyang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_atoi_special(const char *nptr)
{
	long	ret;
	int		sign;

	ret = 0;
	sign = 1;
	while ((*nptr > 8 && *nptr < 14) || *nptr == 32)
		nptr++;
	if (*nptr == '+' || *nptr == '-')
	{
		if (*nptr == '-')
			sign *= -1;
		nptr++;
	}
	if (!(*nptr >= '0' && *nptr <= '9'))
		ft_error();
	while (*nptr >= '0' && *nptr <= '9')
	{
		ret = ret * 10 + *nptr - '0';
		nptr++;
	}
	ret *= sign;
	if (ret > INT_MAX || ret < INT_MIN || *nptr)
		ft_error();
	return (ret);
}

void	ft_all_number(char **argv)
{
	int	i;
	int	j;

	i = 1;
	while (argv[i])
	{
		j = 0;
		while (argv[i][j])
		{
			if (!((argv[i][j] > 8 && argv[i][j] < 14) ||
				argv[i][j] == 32 || argv[i][j] == '+' ||
				argv[i][j] == '-' ||
				(argv[i][j] > 47 && argv[i][j] < 58)))
				ft_error();
			j++;
		}
		i++;
	}
}

void	ft_lst_check_dup(t_list *a)
{
	t_list	*tmp;

	if (!a->next)
		return ;
	tmp = a;
	while (tmp && tmp->next)
	{
		a = tmp->next;
		while (a)
		{
			if (a->content == tmp->content)
				ft_error();
			a = a->next;
		}
		tmp = tmp->next;
	}
}

t_list	*ft_fill_stack_a(char **argv)
{
	t_list	*a;
	int		i;
	int		nbr;

	i = 1;
	ft_all_number(argv);
	a = NULL;
	while (argv[i])
	{
		nbr = ft_atoi_special((const char *)argv[i]);
		ft_lstadd_back(&a, ft_lstnew(nbr));
		i++;
	}
	ft_lst_check_dup(a);
	return (a);
}
