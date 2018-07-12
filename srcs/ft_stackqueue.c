/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stackqueue.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhohls <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/12 15:05:06 by rhohls            #+#    #+#             */
/*   Updated: 2018/07/12 15:05:08 by rhohls           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void ft_stackqueue(t_stack *stack, t_list *new_node)
{
    t_list *temp;

    if (!(stack->start))
        stack->start = new_node;
    temp = stack->start;
    while(temp->next)
        temp = temp->next;
    temp->next = new_node;
    stack->length++;
}