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

int ft_find_index_b(t_list *b, int nbr)
{
    int i;

    i = 1;
    if (nbr > b->content && nbr < ft_lstlast(b))
        i = 0;
    else if (nbr > ft_lstmax(b) || nbr < ft_lstmin(b))
        i = ft_find_index(b, ft_lstmax);
    else
    {
        while (nbr > b->content || nbr < b->next->content)
        {
            i++;
            b = b->next;
        }
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