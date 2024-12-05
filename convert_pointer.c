/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_pointer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbruha <tbruha@student.42Prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/09 14:32:29 by tbruha            #+#    #+#             */
/*   Updated: 2024/08/09 14:32:30 by tbruha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	convert_pointer(unsigned long int ptr, int *count)
{
	if (!ptr)
	{
		write(1, "(nil)", 5);
		return (*count + 5);
	}
	else
	{
		write(1, "0x", 2);
		convert_hex(ptr, count);
		(*count) += 2;
	}
	return ((*count));
}
