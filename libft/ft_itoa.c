/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joamoren <joamoren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/25 16:04:43 by joamoren          #+#    #+#             */
/*   Updated: 2026/06/05 10:51:32 by joamoren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_digits(int n)
{
	int	len;

	len = 0;
	if (n <= 0)
		len = 1;
	while (n != 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

static void	fill_buffer(char *buf, int n, int len)
{
	buf[len] = '\0';
	if (n == 0)
	{
		buf[0] = '0';
		return ;
	}
	if (n < 0)
		buf[0] = '-';
	while (n != 0)
	{
		len--;
		if (n < 0)
			buf[len] = -(n % 10) + '0';
		else
			buf[len] = (n % 10) + '0';
		n /= 10;
	}
}

char	*ft_itoa(int n)
{
	int		len;
	char	*final;

	len = count_digits(n);
	final = (char *)malloc(sizeof(char) * (len + 1));
	if (!final)
		return (NULL);
	fill_buffer(final, n, len);
	return (final);
}
