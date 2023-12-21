#include "push_swap.h"

int ft_find_index_b(t_list *b, int nbr)
{
    int i;

    i = 1;
    if (nbr > b->content && nbr < ft_lstlast(b)->content)
        i = 0;
    else if (nbr > ft_lstmax(b) || nbr < ft_lstmin(b))
        i = ft_find_index(b, ft_lstmax(b));
    else
    {
        while (!(nbr < b->content && nbr > b->next->content))
        {
            i++;
            b = b->next;
        }
    }
    return (i);
}

void    ft_sort_b_till_3(t_list **a, t_list **b)
{
    int i;
    t_list  *tmp;

    while (ft_lstsize(*a) > 3 && !ft_is_sorted(*a))
    {
        tmp = *a;
        i = ft_rotate_type_ab(*a, *b);
        while (i != -1)
        {
            if (i == ft_case_rarb(*a, *b, tmp->content, 'b'))
                i = ft_apply_rarb(a, b, tmp->content, 'b');
            else if (i == ft_case_rrarrb(*a, *b, tmp->content, 'b'))
                i = ft_apply_rrarrb(a, b, tmp->content, 'b');
            else if (i == ft_case_rarrb(*a, *b, tmp->content, 'b'))
                i = ft_apply_rarrb(a, b, tmp->content, 'b');
            else if (i == ft_case_rrarb(*a, *b, tmp->content, 'b'))
                i = ft_apply_rrarb(a, b, tmp->content, 'b');
            else
                tmp = tmp->next;
        }
    }
}

t_list  *ft_sort_b(t_list **a)
{
    t_list *b;

    b = NULL;
    if (ft_lstsize(*a) > 3 && !ft_is_sorted(*a))
        ft_pb(a, &b);
    if (ft_lstsize(*a) > 3 && !ft_is_sorted(*a))
        ft_pb(a, &b);
    if (ft_lstsize(*a) > 3 && !ft_is_sorted(*a))
        ft_sort_b_till_3(a, &b);
    if (!ft_is_sorted(*a))
        ft_sort_three(a);
    return (b);
}

int ft_rotate_type_ab(t_list *a, t_list *b)
{
    int i;
    t_list  *tmp;

    i = ft_case_rrarrb(a, b, a->content, 'b');
    tmp = a;
    while (tmp)
    {
        if (i > ft_case_rrarrb(a, b, tmp->content, 'b'))
            i = ft_case_rrarrb(a, b, tmp->content, 'b');
        if (i > ft_case_rrarb(a, b, tmp->content, 'b'))
            i = ft_case_rrarb(a, b, tmp->content, 'b');
        if (i > ft_case_rarb(a, b, tmp->content, 'b'))
            i = ft_case_rarb(a, b, tmp->content, 'b');
        if (i > ft_case_rarrb(a, b, tmp->content, 'b'))
            i = ft_case_rarrb(a, b, tmp->content, 'b');
        tmp = tmp->next;
    }
    return (i);
}