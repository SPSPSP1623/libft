/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: speladea <speladea@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-05-27 14:50:43 by speladea          #+#    #+#             */
/*   Updated: 2024-05-27 14:50:43 by speladea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_count_words(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	if (s[i] == c)
		count = 0;
	else
		count = 1;
	while (s[i] != '\0' && s[i] == c)
		i++;
	while (s[i] != '\0')
	{
		if (s[i] != c && s[i - 1] == c)
			count++;
		i++;
	}
	return (count);
}

int	ft_word_len(char const *s, char c, int i)
{
	int	count;

	count = 0;
	while (s[i] != '\0' && s[i] != c)
	{
		count++;
		i++;
	}
	return (count);
}

char	**ft_free_split(char **split, int row)
{
	int	i;

	i = 0;
	while (*split[i] != '\0' && i < row)
	{
		free(split[i]);
		i++;
	}
	free(split);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		row;
	int		col;
	char	**split;

	if (!s)
		return (NULL);
	split = malloc(sizeof(char *) * (ft_count_words(s, c) + 1));
	if (!split)
		return (NULL);
	i = 0;
	row = 0;
	while (row < ft_count_words(s, c) && c != '\0')
	{
		col = 0;
		split[row] = malloc(ft_word_len(s, c, i) + 1);
		if (!split[row])
			return (ft_free_split(split, i));
		while (s[i] != '\0' && s[i] == c)
			i++;
		while (s[i] != '\0' && s[i] != c)
		{
			split[row][col] = s[i];
			col++;
			i++;
		}
		split[row][col] = '\0';
		row++;
	}
	split[row] = 0;
	return (split);
}

/*#include <stdio.h>

int	main(void)
{
	int m;

	m = 0;
	char **str;
	str = ft_split(" ", 'a');
	while (str && str[m])
	{
		printf("%s\n", str[m]);
		m++;
	}
	free(str);
	return (0);
}*/
