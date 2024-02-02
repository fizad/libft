/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fizad <fizad@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 11:58:29 by fizad             #+#    #+#             */
/*   Updated: 2024/02/02 11:58:30 by fizad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	count;
	char	*new_str;

	count = ft_strlen(s);
	new_str = ft_calloc(count + 1, sizeof(char));
	if (new_str == NULL)
		return (NULL);
	ft_memcpy(new_str, s, count);
	return (new_str);
}
