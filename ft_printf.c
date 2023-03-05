/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkantara <zkantara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/01 16:20:24 by zkantara          #+#    #+#             */
/*   Updated: 2023/02/24 13:55:08 by zkantara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *forma, ...)
{
	va_list		args;
	int			i;

	if (!forma)
		return (-1);
	va_start(args, forma);
	i = ft_input(forma, args);
	va_end(args);
	return (i);
}
// int main ()
// {
// 	int a = 22;
// 	ft_printf("%", a);
// 	printf("%", a);
// }