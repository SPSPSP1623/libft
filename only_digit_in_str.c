/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   only_digit_in_str.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: speladea <speladea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 13:00:28 by speladea          #+#    #+#             */
/*   Updated: 2025/02/21 13:00:42 by speladea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

bool	only_digit_in_str(char *str)
{
	while (*str)
	{
		if (!(ft_isdigit(*str)))
			return (false);
		str++;
	}
	return (true);
}
