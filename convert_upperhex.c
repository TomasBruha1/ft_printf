/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_upperhex.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbruha <tbruha@student.42Prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 17:35:38 by tbruha            #+#    #+#             */
/*   Updated: 2024/08/08 17:35:40 by tbruha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	convert_upperhex(unsigned int nb, int *count)
{
	if (nb >= 0 && nb <= 9)
	{
		ft_putnbr_fd(nb, 1);
		(*count)++;
	}
	else if (nb > 9 && nb < 16)
	{
		deci_to_upperhex(nb);
		(*count)++;
	}
	else if (nb > 15)
	{
		convert_upperhex(nb / 16, count);
		convert_upperhex(nb % 16, count);
	}
	return (*count);
}

void	deci_to_upperhex(unsigned int nb)
{
	if (nb == 10)
		ft_putchar_fd('A', 1);
	else if (nb == 11)
		ft_putchar_fd('B', 1);
	else if (nb == 12)
		ft_putchar_fd('C', 1);
	else if (nb == 13)
		ft_putchar_fd('D', 1);
	else if (nb == 14)
		ft_putchar_fd('E', 1);
	else if (nb == 15)
		ft_putchar_fd('F', 1);
}
