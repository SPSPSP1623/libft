/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: speladea <speladea@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-05-17 15:09:54 by speladea          #+#    #+#             */
/*   Updated: 2024-05-17 15:09:54 by speladea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((char *) s)[i] = c;
		i++;
	}
	return (s);
}

/*
int	main(void)
{
	char	s[15] = "je suis simon !";
	printf("%s", ft_memset(s + 5, '.', 8));
}
*/
