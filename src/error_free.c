#include "../include/push_swap.h"

void    free_matrix(char **av)
{
    int     i;
    
    i = 0;
    if(!av || !*av)
        return ;
    while(av[i])
        free(av[i++]);
    free(av);
}

void    error_free(t_node **a, char **av, bool flag_ac_2)
{
    free_stack(a);
    if(flag_ac_2)
        free_matrix(av);
    write(2, "Error\n", 6);
    exit(1);
}

void    free_stack(t_node **stack)
{
    t_node  *temp;
    t_node  *curr;

    if(!stack)
        return ;
    curr = *stack;
    while(curr)
    {
        temp = curr->next;
        free(curr);
        curr = temp;
    }
    *stack = NULL;

}

int     error_syntax(char *str_nbr)
{
    if (!(*str_nbr == '+' || *str_nbr == '-' || (*str_nbr >= '0' && *str_nbr <= '9')))
		return (1);
	if ((*str_nbr == '+' || *str_nbr == '-')
		&& !(str_nbr[1] >= '0' && str_nbr[1] <= '9'))
		return (1);
	while (*++str_nbr)
	{
		if (!(*str_nbr >= '0' && *str_nbr <= '9'))
			return (1);
	}
	return (0);
}

int	error_repetition(t_node *a, int nbr)
{
	if (!a)
		return (0);
	while (a)
	{
		if (a->value == nbr)
			return (1);
		a = a->next;
	}
	return (0);
}
