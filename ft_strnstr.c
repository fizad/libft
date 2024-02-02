/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fizad <fizad@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 12:00:53 by fizad             #+#    #+#             */
/*   Updated: 2024/02/02 12:00:54 by fizad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	s2_len;

	s2_len = ft_strlen(s2);
	if (s2_len == 0)
		return ((char *)(s1));
	if (s1 == NULL && n == 0)
		return (NULL);
	while (*s1 && n >= s2_len)
	{
		if (ft_strncmp(s1, s2, s2_len) == 0)
			return ((char *)(s1));
		++s1;
		--n;
	}
	return (NULL);
}
