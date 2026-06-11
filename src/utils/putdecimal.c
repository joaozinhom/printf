/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putdecimal.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaorosa <joaorosa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/08 15:30:32 by joamoren          #+#    #+#             */
/*   Updated: 2026/06/11 11:00:50 by joaorosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putdecimal(int n, int fd)
{
	char	c;
	int		i;

	i = 0;
	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return (11);
	}
	if (n < 0)
	{
		write(fd, "-", 1);
		i++;
		n = -n;
	}
	if (n >= 10)
	{
		i += ft_putdecimal(n / 10, fd);
	}
	c = (n % 10) + '0';
	i += write(fd, &c, 1);
	return (i);
}

int	putunsigneddecimal(unsigned long n, int fd)
{
	char	c;
	int		i;

	i = 0;
	if (n >= 10)
	{
		i += putunsigneddecimal(n / 10, fd);
	}
	c = (n % 10) + '0';
	i += write(fd, &c, 1);
	return (i);
}
