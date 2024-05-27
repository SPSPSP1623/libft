/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: speladea <speladea@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-05-27 14:21:10 by speladea          #+#    #+#             */
/*   Updated: 2024-05-27 14:21:10 by speladea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*start;
	t_list	*new_lst;
	void	*new_content;

	if (!lst || !f || !del)
		return (NULL);
	start = NULL;
	while (lst)
	{
		new_content = f(lst->content);
		new_lst = ft_lstnew(new_content);
		if (!new_lst)
		{
			del(new_content);
			ft_lstclear(&start, del);
			return (NULL);
		}
		ft_lstadd_back(&start, new_lst);
		lst = lst->next;
	}
	return (start);
}
