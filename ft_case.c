#include "push_swap.h"

int ft_case_rrarrb(t_list *a, t_list *b, int nbr, char c)
{
    int i;
    
    i = 0;
    if (c == 'b')
    {
        if (ft_find_index_b(b, nbr))
            i = ft_lstsize(b) - ft_find_index_b(b, nbr);
        if (i < ft_lstsize(a) - ft_find_index(a, nbr) && ft_find_index(a, nbr))
            i = ft_lstsize(a) - ft_find_index(a, nbr);
    }
    if (c == 'a')
    {
        if (ft_find_index_a(a, nbr))
            i = ft_lstsize(a) - ft_find_index_a(a, nbr);
        if (i < ft_lstsize(b) - ft_find_index(b, nbr) && ft_find_index(b, nbr))
            i = ft_lstsize(b) - ft_find_index(b, nbr);
    }
    return (i);
}

int ft_case_rrarb(t_list *a, t_list *b, int nbr, char c)
{
    int i;
    
    if (c == 'b')
    {
        i = ft_find_index_b(b, nbr);
        if (ft_find_index(a, nbr))
            i += ft_lstsize(a) - ft_find_index(a, nbr);
    }
    return (i);
}

int ft_case_rarrb(t_list *a, t_list *b, int nbr, char c)
{
    int i;

    if (c == 'b')
    {
        i = ft_find_index(a, nbr);
        if (ft_find_index_b(b, nbr))
            i += ft_lstsize(b) - ft_find_index_b(b, nbr);
    }
    return (i);
}

int ft_case_rarb(t_list *a, t_list *b, int nbr, char c)
{
    int i;

    if (c == 'b')
    {
        i = ft_find_index(a, nbr);
        if (i < ft_find_index_b(b, nbr))
            i = ft_find_index_b(b, nbr);
    }
    return (i);
}