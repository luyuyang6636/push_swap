#include "push_swap.h"

t_list  *ft_sort_a(t_list **a, t_list **b)
{
    int i;

    i = ft_rotate_type_ba(*a, *b);
}

int ft_rotate_type_ba(t_list *a, t_list *b)
{
    int i;

//    i = ft_case_rrarrb();
}

int ft_find_index_a(t_list *a, int nbr)
{
    int     i;

    i = 1;
    if (nbr < a->content && nbr > ft_lstlast(a))
        i = 0;
    else if(nbr > ft_lstmax(a) || nbr < ft_lstmin(a))
        i = ft_find_index(a, ft_lstmin(a));
    else
    {
        while (!(nbr > a->content && nbr < a->next->content))
        {
            i++;
            a = a->next;
        }
        
    }
    return (i);
}