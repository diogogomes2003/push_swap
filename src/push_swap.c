#include "../include/push_swap.h"

int     main(int ac, char **av)
{
    t_node *a;
    t_node *b;

    a = NULL;
    b = NULL;
    if (ac == 1 || (ac == 2 && !av[1][0]))
        return(1);
    else if (ac == 2)
        av = ft_split(av[1], ' ');
    stack_init(&a, av + !(ac == 2), ac == 2);
    if(!stack_sorted(a))
    {
        if(stack_len(a) == 2)
            sa(&a, false);
        else if (stack_len(a) == 3)
            tiny_sort(&a);
        else
            push_swap(&a, &b);
    }
    free_stack(&a);
}
