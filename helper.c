#include "push_swap.h"

void    ft_error(void)
{
    write (2, "Error/n", 6);
    exit(1);
}

int ft_find_index(t_list *lst, int nbr)
{
    int i;

    i = 0;
    while (lst && nbr != lst->content)
    {
        i++;
        lst = lst->next;
    }
    return (i);
}

int ft_lstmax(t_list *lst)
{
    int lstmax;

    lstmax = lst->content;
    while (lst->next)
    {
        if (lstmax < lst->next->content)
            lstmax = lst->next->content;
        lst = lst->next;
    }
    return (lstmax);
}

int ft_lstmin(t_list *lst)
{
    int lstmin;

    lstmin = lst->content;
    while (lst->next)
    {
        if (lstmin > lst->next->content)
            lstmin = lst->next->content;
        lst = lst->next;
    }
    return (lstmin);
}

void    ft_free(t_list **a)
{
    t_list  *tmp;

    if (!a)
        return;
    while (*a)
    {
        tmp = (*a)->next;
        free (*a);
        *a = tmp;
    }
}