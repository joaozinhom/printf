/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joamoren <joamoren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/25 11:52:47 by joamoren          #+#    #+#             */
/*   Updated: 2026/05/25 12:40:48 by joamoren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_in_it(char a, char const *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == a)
		{
			return (1);
		}
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	size_t	start;
	size_t	end;
	char	*str;

	start = 0;
	while (s1[start] && is_in_it(s1[start], set))
		start++;
	end = ft_strlen(s1);
	while (end > start && is_in_it(s1[end - 1], set))
		end--;
	str = (char *)malloc(sizeof(*s1) * (end - start + 1));
	if (!str)
		return (NULL);
	j = 0;
	i = start;
	while (i < end)
	{
		str[j] = s1[i];
		i++;
		j++;
	}
	str[j] = 0;
	return (str);
}
