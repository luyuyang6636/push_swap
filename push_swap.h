#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <limits.h>
# include <stdlib.h>
# include "libft/libft.h"

void    ft_error(void);
void    ft_all_number(char **argv);
t_list *ft_fill_stack_a(int argc, char **argv);
int	ft_atoi_special(const char *nptr);
void    ft_lst_check_dup(t_list *a);
void    ft_ra(t_list **a, int j);
void    ft_rra(t_list **a, int j);
void    ft_pb(t_list **a, t_list **b);
void    ft_sa(t_list **a, int j);
void    ft_sb(t_list **b, int j);
void    ft_pb(t_list **a, t_list **b);
void    ft_rb(t_list **b, int j);
void    ft_rrb(t_list **b, int j);
void    ft_ss(t_list **a, t_list **b);
void    ft_rr(t_list **a, t_list **b);
void    ft_rrr(t_list **a, t_list **b);

#endif
