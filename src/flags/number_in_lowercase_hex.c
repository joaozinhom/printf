/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   number_in_lowercase_hex.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaorosa <joaorosa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/08 15:44:37 by joamoren          #+#    #+#             */
/*   Updated: 2026/06/10 17:01:05 by joaorosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	number_lowercase_hex(unsigned long i)
{
	return (ft_puthexdecimal(i, 1, 1));
}
