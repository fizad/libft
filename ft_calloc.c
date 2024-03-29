/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fizad <fizad@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 11:42:54 by fizad             #+#    #+#             */
/*   Updated: 2024/02/02 11:42:55 by fizad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	if (count == SIZE_MAX && size == SIZE_MAX)
		return (NULL);
	if (size != 0)
		if (SIZE_MAX / size <= count)
			return (NULL);
	ptr = malloc(count * size);
	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}
	else
	{
		ft_bzero(ptr, count * size);
		return (ptr);
	}
}
