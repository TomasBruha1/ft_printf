/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_int.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbruha <tbruha@student.42Prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 10:50:05 by tbruha            #+#    #+#             */
/*   Updated: 2024/08/06 10:50:07 by tbruha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	convert_int(int nb)
{
	int		count;
	char	*temp;

	temp = NULL;
	temp = ft_itoa(nb);
	ft_putnbr_fd(nb, 1);
	count = ft_strlen(temp);
	free(temp);
	return (count);
}
