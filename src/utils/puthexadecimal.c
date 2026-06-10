/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   puthexadecimal.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joamoren <joamoren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/08 15:30:32 by joamoren          #+#    #+#             */
/*   Updated: 2026/06/08 15:54:40 by joamoren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_puthexcimal(int n, int fd, int islower)
{
	unsigned int	num;
	char			*hex_digits;

	if (islower == 1)
		hex_digits = "0123456789abcdef";
	if (islower == 0)
		hex_digits = "0123456789ABCDEF";
	if (n < 0)
	{
		write(fd, "-", 1);
		num = (unsigned int)(-n);
	}
	else
	{
		num = (unsigned int)n;
	}
	if (num >= 16)
	{
		ft_puthexcimal(num / 16, fd, islower);
	}
	write(fd, &hex_digits[num % 16], 1);
}
