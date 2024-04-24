/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_command.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dduarte- <dduarte-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 14:33:24 by dduarte-          #+#    #+#             */
/*   Updated: 2024/04/24 14:35:13 by dduarte-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	swap(t_node **head)
{
	t_node	*current;
	t_node	*nextnode;

	current = *head;
	nextnode = current->next;
	if (!head || !*head || !(*head)->next)
		return ;
	current->next = nextnode->next;
	if (nextnode->next)
		nextnode->next->prev = current;
	nextnode->next = current;
	current->prev = nextnode;
	*head = nextnode;
}

void	sa(t_node **a, bool checker)
{
	swap(a);
	if (!checker)
		write(1, "sa\n", 3);
}

void	sb(t_node **b, bool checker)
{
	swap(b);
	if (!checker)
		write(1, "sb\n", 3);
}

void	ss(t_node **a, t_node **b, bool checker)
{
	swap(a);
	swap(b);
	if (!checker)
		write(1, "ss\n", 3);
}
