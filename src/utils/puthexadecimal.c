/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   puthexadecimal.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaorosa <joaorosa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/08 15:30:32 by joamoren          #+#    #+#             */
/*   Updated: 2026/06/11 11:00:41 by joaorosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthexdecimal(unsigned long n, int fd, int islower)
{
	unsigned long	num;
	int				i;
	char			*hex_digits;

	i = 0;
	num = n;
	if (islower)
		hex_digits = "0123456789abcdef";
	else
		hex_digits = "0123456789ABCDEF";
	if (num >= 16)
	{
		i += ft_puthexdecimal(num / 16, fd, islower);
	}
	i += write(fd, &hex_digits[num % 16], 1);
	return (i);
}
