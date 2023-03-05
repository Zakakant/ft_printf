/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cs_hexadecimal.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkantara <zkantara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 20:18:48 by zkantara          #+#    #+#             */
/*   Updated: 2023/02/14 23:08:00 by zkantara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_cs_hexadecimal(unsigned int n)
{
	if (n == 0)
		return (write(1, "0", 1));
	else
		ft_upperhex(n);
	return (ft_hex_len(n));
}
