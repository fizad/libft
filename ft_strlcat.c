/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fizad <fizad@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 11:59:17 by fizad             #+#    #+#             */
/*   Updated: 2024/02/02 11:59:18 by fizad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dst_len;

	if ((src == NULL || dst == NULL) && dstsize == 0)
		return (0);
	dst_len = ft_strlen(dst);
	if (dst_len > dstsize)
		return (dstsize + ft_strlen(src));
	while (*src)
	{
		if (dst_len + 1 < dstsize)
			dst[dst_len++] = *src++;
		else
			break ;
	}
	dst[dst_len] = '\0';
	return (ft_strlen(dst) + ft_strlen(src));
}
