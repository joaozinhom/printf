/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joamoren <joamoren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/24 13:36:58 by joamoren          #+#    #+#             */
/*   Updated: 2026/06/05 10:53:34 by joamoren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*v;

	v = NULL;
	while (*s != '\0')
	{
		if (*s == (char)c)
		{
			v = (char *)s;
		}
		s = s + 1;
	}
	if ((char)c == '\0')
	{
		v = (char *)s;
	}
	return (v);
}
