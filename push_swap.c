#include "push_swap.h"

void    ft_sort_three(t_list **lst)
{
    int n1;
    int n2;
    int n3;

    n1 = (*lst)->content;
    n2 = (*lst)->next->content;
    n3 = (*lst)->next->next->content;
    if (n1 < n3 && n2 > n3)
    {
        ft_rra(lst, 1);
        ft_sa(lst, 1);
    }
    else if (n1 < n2 && n1 > n3)
        ft_rra(lst, 1);
    else if (n1 > n2 && n2 > n3)
    {
        ft_sa(lst, 1);
        ft_rra(lst, 1);
    }
    else if (n2 < n3 && n3 < n1)
        ft_ra(lst, 1);
    else
        ft_sa(lst, 1);
}

void    ft_sort(t_list **a)
{
    t_list  *b;
    int     lstmin;
    int     i;

    b = NULL;
    if (ft_lstsize(*a) == 2 && !ft_is_sorted(*a))
        ft_sa(a, 1);
    else
    {
        b = ft_sort_b(a);
        a = ft_sort_a(a, &b);    
        lstmin = ft_lstmin(*a);
        i = ft_find_index(*a, lstmin);
        if (i < ft_lstsize(*a) - i)
        {
            while ((*a)->content != lstmin)
                ft_ra(a, 1);
        }
        else
        {
            while((*a)->content != lstmin)
                ft_rra(a, 1);
        }
    }

}

int ft_is_sorted(t_list *lst)
{
    while (lst && lst->next)
    {
        if ((lst->content > lst->next->content))
            return (0);
        lst = lst->next;
    }
    return (1);
}

int main(int argc, char **argv)
{
    t_list *a;

    a = ft_fill_stack_a(argc, argv);
    if (!ft_is_sorted(a))
        ft_sort(&a);
    ft_free(&a);
    return (0);
}