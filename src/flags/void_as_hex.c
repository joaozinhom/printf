/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   void_as_hex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaorosa <joaorosa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/10 17:01:23 by joaorosa          #+#    #+#             */
/*   Updated: 2026/06/10 17:20:59 by joaorosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	voind_in_hex(void *pointer)
{
	int	i;

	i = 0;
	i += write(1, "0x", 2);
	i += (ft_puthexdecimal((unsigned long)(pointer), 1, 1));
	return (i);
}
