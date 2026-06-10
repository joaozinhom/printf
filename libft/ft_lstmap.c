/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joamoren <joamoren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/31 10:10:45 by joamoren          #+#    #+#             */
/*   Updated: 2026/06/05 10:52:01 by joamoren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	*handle_fail(t_list **new, void (*del)(void *), void *content)
{
	if (content)
		del(content);
	ft_lstclear(new, del);
	return (NULL);
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*new_node;
	void	*content;

	if (!lst || !f || !del)
		return (NULL);
	new = NULL;
	while (lst != NULL)
	{
		content = f(lst->content);
		if (!content)
			return (handle_fail(&new, del, NULL));
		new_node = ft_lstnew(content);
		if (!new_node)
			return (handle_fail(&new, del, content));
		ft_lstadd_back(&new, new_node);
		lst = lst->next;
	}
	return (new);
}
