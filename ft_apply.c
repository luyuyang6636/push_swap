#include "push_swap.h"

int ft_apply_rrarrb(t_list **a, t_list **b, int nbr, char c)
{
    if (c == 'b')
    {
        while (ft_find_index(*a, nbr) && ft_find_index_b(*b, nbr))
            ft_rrr(a, b);
        while (ft_find_index(*a, nbr))
            ft_rra(a, 1);
        while (ft_find_index_b(*b, nbr))
            ft_rrb(b, 1);
        ft_pb(a, b);
    }
    if (c == 'a')
    {
        while (ft_find_index(*b, nbr) && ft_find_index_a(*a, nbr))
            ft_rrr(a, b);
        while (ft_find_index(*b, nbr))
            ft_rrb(b, 1);
        while (ft_find_index_a(*a, nbr))
            ft_rra(a, 1);
        ft_pa(a, b);
    }
    return (-1);
}

int ft_apply_rarrb(t_list **a, t_list **b, int nbr, char c)
{
    if (c == 'b')
    {
        while (ft_find_index(*a, nbr))
            ft_ra(a, 1);
        while (ft_find_index_b(*b, nbr))
            ft_rrb(b, 1);
        ft_pb(a, b);
    }
    if (c == 'a')
    {
        while (ft_find_index(*b, nbr))
            ft_rrb(b, 1);
        while (ft_find_index_a(*a, nbr))
            ft_ra(a, 1);
        ft_pa(a, b);
    }
    return (-1);
}

int ft_apply_rrarb(t_list **a, t_list **b, int nbr, char c)
{
    if (c == 'b')
    {
        while (ft_find_index(*a, nbr))
            ft_rra(a, 1);
        while (ft_find_index_b(*b, nbr))
            ft_rb(b, 1);
        ft_pb(a, b);
    }
    if (c == 'a')
    {
        while (ft_find_index(*b, nbr))
            ft_rb(b, 1);
        while (ft_find_index_a(*a, nbr))
            ft_rra(a, 1);
        ft_pa(a, b);
    }
    return (-1);
}

int ft_apply_rarb(t_list **a, t_list **b, int nbr, char c)
{
    if (c == 'b')
    {
        while (ft_find_index(*a, nbr) && ft_find_index_b(*b, nbr))
            ft_rr(a, b);
        while (ft_find_index(*a, nbr))
            ft_ra(a, 1);
        while (ft_find_index_b(*b, nbr))
            ft_rb(b, 1);
        ft_pb(a, b);
    }
    if (c == 'a')
    {
        while (ft_find_index(*b, nbr) && ft_find_index_a(*a, nbr))
            ft_rr(a, b);
        while (ft_find_index(*b, nbr))
            ft_rb(b, 1);
        while (ft_find_index_a(*a, nbr))
            ft_ra(a, 1);
        ft_pa(a, b);
    }
    return (-1);
}