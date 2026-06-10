/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   unsigned_in_base10.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joamoren <joamoren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/08 15:50:06 by joamoren          #+#    #+#             */
/*   Updated: 2026/06/08 15:58:17 by joamoren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putdecimal(int n, int fd);

void	print_unsigned_base10(unsigned int i)
{
	ft_putdecimal((int)i, 1);
}
