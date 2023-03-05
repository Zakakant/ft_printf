/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexadecimal.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkantara <zkantara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 16:34:53 by zkantara          #+#    #+#             */
/*   Updated: 2023/02/14 23:08:17 by zkantara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hexadecimal(unsigned int n)
{
	if (n == 0)
		return (write(1, "0", 1));
	else
		ft_lorhex(n);
	return (ft_hex_len(n));
}
