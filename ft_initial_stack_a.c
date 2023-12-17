#include "push_swap.h"

int	ft_atoi_special(const char *nptr)
{
	long	ret;
	int	sign;

	ret = 0;
	sign = 1;
	while ((*nptr > 8 && *nptr < 14) || *nptr == 32)
		nptr++;
	if (*nptr == '+' || *nptr == '-')
	{
		if (*nptr == '-')
			sign *= -1;
		nptr++;
	}	
	while (*nptr >= '0' && *nptr <= '9')
	{
		ret = ret * 10 + *nptr - '0';
		nptr++;
	}
    ret *= sign;
    if (ret > INT_MAX || ret < INT_MIN)
        ft_error();
	return (ret * sign);
}

void    ft_all_number(char **argv)
{
    int i;
    int j;

    i = 1;
    while (argv[i++])
    {
        j = 0;
        while (argv[i][j])
        {
            if (!((argv[i][j] > 8 && argv[i][j] < 14) ||
                    argv[i][j] == 32 || argv[i][j] == '+' ||
                        argv[i][j] == '-' ||
                            (argv[i][j] > 47 && argv[i][j] < 58)))
                ft_error();
            j++;
        }
    }
}

t_list *ft_fill_stack_a(int argc, char **argv)
{
    t_list *a;
    int i;
    int    nbr;

    i = 1;
    if (argc < 2)
        ft_error();
    ft_all_number(argv);
    while (argv[i])
    {
        nbr = ft_atoi_special((const char *)argv[i]);
        ft_lstadd_back(&a, ft_lstnew(nbr));
        i++;
    }
    return (a);
}