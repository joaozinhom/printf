/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   number_in_uppercase_hex.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joamoren <joamoren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/08 15:44:37 by joamoren          #+#    #+#             */
/*   Updated: 2026/06/08 15:57:43 by joamoren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unistd.h"

void	ft_puthexcimal(int n, int fd, int islower);

void	number_uppercase_hex(int i)
{
	ft_puthexcimal(i, 1, 0);
}
