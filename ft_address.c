/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_address.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkantara <zkantara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 20:16:13 by zkantara          #+#    #+#             */
/*   Updated: 2023/02/14 23:07:49 by zkantara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_ptr_len(unsigned long n)
{
	int	len;

	len = 0;
	while (n)
	{
		n /= 16;
		len++;
	}
	return (len);
}

int	ft_address(unsigned long n)
{
	int		i;

	i = 0;
	i += write(1, "0x", 2);
	if (n == 0)
		i += write(1, "0", 1);
	else
	{
		ft_lorhex(n);
		i += ft_ptr_len(n);
	}
	return (i);
}
