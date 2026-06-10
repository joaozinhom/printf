/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joamoren <joamoren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/30 12:16:05 by joamoren          #+#    #+#             */
/*   Updated: 2026/06/05 10:51:44 by joamoren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tempnext;

	if (lst && del)
	{
		while (*lst != NULL)
		{
			tempnext = (*lst)->next;
			ft_lstdelone(*lst, del);
			*lst = tempnext;
		}
	}
}
