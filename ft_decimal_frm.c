/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_decimal_frm.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkantara <zkantara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 17:49:36 by zkantara          #+#    #+#             */
/*   Updated: 2023/02/14 23:08:03 by zkantara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_decimal_frm(int n)
{
	int		i;
	char	*str;

	i = 0;
	str = ft_itoa(n);
	i = ft_printstr(str);
	free(str);
	return (i);
}
