/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fizad <fizad@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 11:41:53 by fizad             #+#    #+#             */
/*   Updated: 2024/02/02 11:41:54 by fizad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_space(int c)
{
	return (c == ' ' || c == '\t' || c == '\n'
		|| c == '\r' || c == '\f' || c == '\v');
}

int	ft_atoi(const char *n)
{
	int	sign;
	int	r;

	sign = 1;
	r = 0;
	while (is_space(*n))
		++n;
	if (*n == '+' || *n == '-')
	{
		if (*n == '-')
			sign = -1;
		++n;
	}
	while (ft_isdigit(*n))
	{
		r = (r * 10) + (*n - '0');
		++n;
	}
	return (r * sign);
}
