#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <limits.h>
# include <stdlib.h>

typedef struct s_list
{
    int content;
    struct s_list  *next;
}   t_list;

void    ft_error(void);
int     ft_lstmax(t_list *lst);
int     ft_lstmin(t_list *lst);
void    ft_all_number(char **argv);
t_list *ft_fill_stack_a(int argc, char **argv);
int	    ft_atoi_special(const char *nptr);
void    ft_lst_check_dup(t_list *a);
int     ft_is_sorted(t_list *lst);
void    ft_sort(t_list **a);
int     ft_find_index(t_list *b, int nbr);
int     ft_find_index_a(t_list *a, int nbr);
int     ft_find_index_b(t_list *b, int nbr);
t_list  *ft_sort_b(t_list **a);
t_list  **ft_sort_a(t_list **a, t_list **b);
void    ft_sort_b_till_3(t_list **a, t_list **b);
void    ft_sort_three(t_list **lst);
int     ft_rotate_type_ab(t_list *a, t_list *b);
int     ft_case_rrarrb(t_list *a, t_list *b, int nbr, char c);
int     ft_case_rarrb(t_list *a, t_list *b, int nbr, char c);
int     ft_case_rrarb(t_list *a, t_list *b, int nbr, char c);
int     ft_case_rarb(t_list *a, t_list *b, int nbr, char c);
int     ft_apply_rrarrb(t_list **a, t_list **b, int nbr, char c);
int     ft_apply_rrarb(t_list **a, t_list **b, int nbr, char c);
int     ft_apply_rarrb(t_list **a, t_list **b, int nbr, char c);
int     ft_apply_rarb(t_list **a, t_list **b, int nbr, char c);
int	    ft_lstsize(t_list *lst);
t_list	*ft_lstnew(int content);
t_list	*ft_lstlast(t_list *lst);
void	ft_lstadd_back(t_list **lst, t_list *new);
void    ft_ra(t_list **a, int j);
void    ft_rra(t_list **a, int j);
void    ft_pb(t_list **a, t_list **b);
void    ft_sa(t_list **a, int i);
void    ft_sb(t_list **b, int i);
void    ft_pb(t_list **a, t_list **b);
void    ft_pa(t_list **a, t_list **b);
void    ft_rb(t_list **b, int j);
void    ft_rrb(t_list **b, int j);
void    ft_ss(t_list **a, t_list **b);
void    ft_rr(t_list **a, t_list **b);
void    ft_rrr(t_list **a, t_list **b);
void    ft_free(t_list **a);

#endif
