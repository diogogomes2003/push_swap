/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dduarte- <dduarte-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 14:35:50 by dduarte-          #+#    #+#             */
/*   Updated: 2024/04/24 14:35:53 by dduarte-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/libft.h"
# include <stdbool.h>
# include <limits.h>

typedef struct s_node
{
	int				value;
	int				current_position;
	int				final_index;
	int				push_price;
	bool			above_median;
	bool			cheapest;
	struct s_node	*target_node;
	struct s_node	*next;
	struct s_node	*prev;
}	t_node;

void	stack_init(t_node **a, char **av, bool flag_ac_2);
bool	stack_sorted(t_node *stack);
int		stack_len(t_node *stack);
void	sa(t_node **a, bool checker);
void	tiny_sort(t_node **a);
t_node	*find_last_node(t_node *head);
void	ra(t_node **a, bool checker);
void	reverse_rotate(t_node **stack);
void	rra(t_node **a, bool checker);
void	handle_five(t_node **a, t_node **b);
void	init_nodes(t_node *a, t_node *b);
t_node	*find_smallest(t_node *stack);
void	push_swap(t_node **a, t_node **b);
void	set_current_position(t_node *stack);
void	push(t_node **dest, t_node **src);
void	pa(t_node **a, t_node **b, bool checker);
void	pb(t_node **b, t_node **a, bool checker);
void	rra(t_node **a, bool checker);
void	rrb(t_node **b, bool checker);
void	rrr(t_node **a, t_node **b, bool checker);
void	rb(t_node **b, bool checker);
void	rr(t_node **a, t_node **b, bool checker);
t_node	*return_cheapest(t_node *stack);
int		error_syntax(char *str_nbr);
void	error_free(t_node **a, char **av, bool flag_ac_2);
int		error_repetition(t_node *a, int nbr);
void	append_node(t_node **stack, int nbr);
void	free_matrix(char **av);
void	free_stack(t_node **stack);
void	finish_rotation(t_node **stack, t_node *top_node, char stack_name);

#endif