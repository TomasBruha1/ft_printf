/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_unsignedint.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbruha <tbruha@student.42Prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 17:56:21 by tbruha            #+#    #+#             */
/*   Updated: 2024/08/06 17:56:22 by tbruha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	convert_unsignedint(unsigned int nb)
{
	char	*temp;
	int		len;

	temp = NULL;
	temp = ft_itoa_unsigned(nb);
	len = ft_strlen(temp);
	ft_putunsignbr_fd(nb, 1);
	free(temp);
	return (len);
}
