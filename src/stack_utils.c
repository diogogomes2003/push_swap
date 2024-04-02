#include "../include/push_swap.h"

int stack_len(t_node *stack)
{
    int count;

    if(!stack)
        return(0);
    count = 0;
    while(stack)
    {
        ++count;
        stack = stack->next;
    }
    return(count);
}

t_node  *return_cheapest(t_node *stack)
{
    if(!stack)
        return(NULL);
    while(stack)
    {
            if(stack->cheapest)
                return(stack);
            stack = stack->next;
    }
    return(NULL);
}

t_node  *find_smallest(t_node *stack)
{
    long    smallest;
    t_node  *smallest_node;

    if(!stack)
        return(NULL);
    smallest = LONG_MAX;
    while(stack)
    {
        if(stack->value < smallest)
        {
            smallest = stack->value;
            smallest_node = stack;
        }
        stack = stack->next;
    }
    return(smallest_node);
}

t_node *find_last_node(t_node *head)
{
    if(!head)
        return(NULL);
    while(head->next)
        head = head->next;
    return(head);
}

void    append_node(t_node **stack, int nbr)
{
    t_node  *node;
    t_node  *last_node;

    if(!stack)
        return ;
    node = malloc(sizeof(t_node));
    if(!node)
        return ;
    node->next = NULL;
    node->cheapest = false;
    node->value = nbr;
    if(!*stack)
    {
        *stack = node;
        node->prev = NULL;
    }    
    else
    {
        last_node = find_last_node(*stack);
        last_node->next = node;
        node->prev = last_node;
    }
}
