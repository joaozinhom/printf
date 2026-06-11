/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flag_upper_x.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaorosa <joaorosa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/10 19:53:48 by joaorosa          #+#    #+#             */
/*   Updated: 2026/06/11 13:06:41 by joaorosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	flag_upper_x(unsigned int i)
{
	return (ft_puthexdecimal((unsigned long)i, 1, 0));
}
