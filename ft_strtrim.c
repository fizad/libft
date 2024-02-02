/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fizad <fizad@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 12:01:26 by fizad             #+#    #+#             */
/*   Updated: 2024/02/02 12:01:27 by fizad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	const char	*tail;
	size_t		sub_len;

	while (*s1 && ft_strchr(set, *s1))
		++s1;
	tail = s1 + ft_strlen(s1);
	while (s1 != tail)
	{
		if (ft_strchr(set, *(tail - 1)))
			--tail;
		else
			break ;
	}
	sub_len = tail - s1;
	return (ft_substr(s1, 0, sub_len));
}
