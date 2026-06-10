/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joamoren <joamoren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/23 15:35:51 by joamoren          #+#    #+#             */
/*   Updated: 2026/06/05 10:52:31 by joamoren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*d;
	const char	*s;
	size_t		i;

	if (!dst || !src)
		return (NULL);
	d = (char *)dst;
	s = (const char *)src;
	if (d == s || len == 0)
		return (dst);
	if (d < s)
	{
		ft_memcpy(d, s, len);
		return (d);
	}
	else
	{
		i = len;
		while (i > 0)
		{
			d[i - 1] = s[i - 1];
			i--;
		}
		return (dst);
	}
}
