/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fizad <fizad@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 12:01:13 by fizad             #+#    #+#             */
/*   Updated: 2024/02/02 12:01:13 by fizad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*head;
	char	*tail;

	head = (char *)s;
	tail = head + ft_strlen(head);
	while (1)
	{
		if (*tail == (char)c)
			return ((char *)tail);
		if (head == tail)
			break ;
		--tail;
	}
	return (NULL);
}
