/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fizad <fizad@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 11:47:48 by fizad             #+#    #+#             */
/*   Updated: 2024/02/02 11:47:50 by fizad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;
	t_list	*node;

	if (lst == NULL || del == NULL)
		return ;
	node = *lst;
	while (node)
	{
		temp = node;
		node = node->next;
		del(temp->content);
		free(temp);
	}
	*lst = node;
}
