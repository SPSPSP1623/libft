/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: speladea <speladea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 13:42:30 by speladea          #+#    #+#             */
/*   Updated: 2025/02/21 13:42:32 by speladea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long	ft_atol(const char *nptr)
{
	long	nb;
	long	even;

	nb = 0;
	even = 1;
	if (*nptr == '-')
	{
		even = -1;
		nptr++;
	}
	else if (*nptr == '+')
		nptr++;
	while (*nptr)
	{
		nb = nb * 10 + (*nptr++ - '0');
	}
	nb = nb * even;
	return (nb);
}
