/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fizad <fizad@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 11:54:13 by fizad             #+#    #+#             */
/*   Updated: 2024/02/02 11:54:14 by fizad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;
	int				is_overlap;

	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	is_overlap = ((d + n) >= s);
	if (is_overlap)
	{
		while (n)
		{
			--n;
			*(d + n) = *(s + n);
		}
	}
	else
		ft_memcpy(d, s, n);
	return (dest);
}
