#include "push_swap.h"

void    ft_ra(t_list **a, int j)
{
    t_list  *tmp;
    
    if (!*a || !(*a)->next)
        return;
    tmp = *a;
    *a = (*a)->next;
    tmp->next = NULL;
    ft_lstadd_back(a, tmp);
    if (j == 1)
        write(1, "ra\n", 3);
}

/* first let a points to the last element of the list, then (*a)->next = tmp connects the last
of the list to the first element, creating a stack. then the second loop moves tmp to the second
last item, which should be the last item in the original list, and set tmp->next to null, so now
**a points to the original last item, and because we linked it in a circular structure, the 
original list now follow behind the new *a.
*/
void    ft_rra(t_list **a, int j)
{
    t_list *tmp;
    int i;

    i = 0;
    tmp = *a;
    if (!*a || !(*a)->next)
        return;
    while ((*a)->next)
    {
        *a = (*a)->next;
        i++;
    }
    (*a)->next = tmp;
    while (i-- > 1)
        tmp = tmp->next;
    tmp->next = NULL;
    if (j == 1)
        write (1, "rra\n", 4);
}

void    ft_sa(t_list **a, int i)
{
    t_list *tmp;

    if (!*a || !(*a)->next)
        return;
    tmp = *a;
    *a = (*a)->next;
    tmp->next = (*a)->next;
    (*a)->next = tmp;
    if (i == 1)
        write(1, "sa\n", 3);
}

void    ft_pb(t_list **a, t_list **b)
{
    t_list  *tmp;

    if (!*a)
        return;
    tmp = *a;
    *a = (*a)->next;
    ft_lstadd_front(b, tmp);
    write(1, "pb\n", 3);
}