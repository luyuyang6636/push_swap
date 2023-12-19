#include "push_swap.h"

void    ft_sb(t_list **b, int i)
{
    t_list *tmp;

    if (!*b || !(*b)->next)
        return;
    tmp = *b;
    *b = (*b)->next;
    tmp->next = (*b)->next;
    (*b)->next = tmp;
    if (i == 1)
        write (1, "sb\n", 3);
}

void    ft_pa(t_list **a, t_list **b)
{
    t_list *tmp;

    if (!*a)
        return;
    tmp = *a;
    *a = *b;
    *b = (*b)->next;
    (*a)->next = tmp;
    write (1, "pa\n", 3);
}

void    ft_rb(t_list **b, int j)
{
    t_list *tmp;

    if (!*b || !(*b)->next)
        return;
    tmp = *b;
    *b = (*b)->next;
    tmp->next = NULL;
    ft_lstadd_back(b, tmp);
    if (j == 1)
        write(1, "rb\n", 3);
}

void    ft_rrb(t_list **b, int j)
{
    t_list *tmp;
    int i;

    i = 0;
    if (!*b || !(*b)->next)
        return;
    tmp = *b;
    while ((*b)->next)
    {
        *b = (*b)->next;
        i++;
    }
    (*b)->next = tmp;
    while (i-- > 1)
        tmp = tmp->next;
    tmp->next = NULL;
    if (j == 1)
        write(1, "rrb\n", 4);
}