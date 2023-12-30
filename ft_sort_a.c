#include "push_swap.h"

t_list  **ft_sort_a(t_list **a, t_list **b)
{
    int i;
    t_list  *tmp;

    while (*b)
    {
        tmp = *b;
        i = ft_rotate_type_ba(*a, *b);
        while (i != -1)
        {
            if (i == ft_case_rarb(*a, *b, tmp->content, 'a'))
                i = ft_apply_rarb(a, b, tmp->content, 'a');
            else if (i == ft_case_rarrb(*a, *b, tmp->content, 'a'))
                i = ft_apply_rarrb(a, b, tmp->content, 'a');
            else if (i == ft_case_rrarrb(*a, *b, tmp->content, 'a'))
                i = ft_apply_rrarrb(a, b, tmp->content, 'a');
            else if (i == ft_case_rrarb(*a, *b, tmp->content, 'a'))
                i = ft_apply_rrarb(a, b, tmp->content, 'a');
            else
                tmp = tmp->next;
        }
    }
    return (a); 
}

int ft_rotate_type_ba(t_list *a, t_list *b)
{
    int     i;
    t_list *tmp;

    tmp = b;
    i = ft_case_rrarrb(a, b, b->content, 'a');
    while (tmp)
    {
        if (i > ft_case_rarb(a, b, tmp->content, 'a'))
            i = ft_case_rarb(a, b, tmp->content, 'a');
        if (i > ft_case_rarrb(a, b, tmp->content, 'a'))
            i = ft_case_rarrb(a, b, tmp->content, 'a');
        if (i > ft_case_rrarrb(a, b, tmp->content, 'a'))
            i = ft_case_rrarrb(a, b, tmp->content, 'a');
        if (i > ft_case_rrarb(a, b, tmp->content, 'a'))
            i = ft_case_rrarb(a, b, tmp->content, 'a');
        tmp = tmp->next;
    }
    return (i);
}

int ft_find_index_a(t_list *a, int nbr)
{
    int     i;

    i = 1;
    if (nbr < a->content && nbr > ft_lstlast(a)->content)
        i = 0;
    else if(nbr > ft_lstmax(a) || nbr < ft_lstmin(a))
        i = ft_find_index(a, ft_lstmin(a));
    else
    {
        while (a->next != NULL && (a->content > nbr || a->next->content < nbr))
        {
            i++;
            a = a->next;
        }
        
    }
    return (i);
}