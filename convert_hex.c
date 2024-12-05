/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_hex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbruha <tbruha@student.42Prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 13:47:59 by tbruha            #+#    #+#             */
/*   Updated: 2024/08/07 13:48:00 by tbruha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	convert_hex(unsigned long int nb, int *count)
{
	if (nb >= 0 && nb <= 9)
	{
		ft_putnbr_fd(nb, 1);
		(*count)++;
	}
	else if (nb > 9 && nb < 16)
	{
		deci_to_hex(nb);
		(*count)++;
	}
	else if (nb > 15)
	{
		convert_hex(nb / 16, count);
		convert_hex(nb % 16, count);
	}
	return (*count);
}

void	deci_to_hex(unsigned int nb)
{
	if (nb == 10)
		ft_putchar_fd('a', 1);
	else if (nb == 11)
		ft_putchar_fd('b', 1);
	else if (nb == 12)
		ft_putchar_fd('c', 1);
	else if (nb == 13)
		ft_putchar_fd('d', 1);
	else if (nb == 14)
		ft_putchar_fd('e', 1);
	else if (nb == 15)
		ft_putchar_fd('f', 1);
}
