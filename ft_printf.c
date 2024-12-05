/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbruha <tbruha@student.42Prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 13:50:11 by tbruha            #+#    #+#             */
/*   Updated: 2024/07/25 13:50:14 by tbruha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
	int		count;
	va_list	args;

	count = 0;
	va_start(args, str);
	while (*str)
	{
		if (*str == '%' && *(str + 1))
		{
			str++;
			specifier_conversion(*str, args, &count);
		}
		else
		{
			write(1, &*str, 1);
			count++;
		}
		str++;
	}
	va_end(args);
	return (count);
}

int	specifier_conversion(char c, va_list args, int *count)
{
	if (c == 'c')
		*count += convert_char(va_arg(args, int));
	else if (c == 's')
		*count += convert_string(va_arg(args, char *));
	else if (c == 'p')
		*count = convert_pointer(va_arg(args, unsigned long int), count);
	else if (c == 'd' || c == 'i')
		*count += convert_int(va_arg(args, int));
	else if (c == 'u')
		*count += convert_unsignedint(va_arg(args, unsigned long int));
	else if (c == 'x')
		*count = convert_hex(va_arg(args, unsigned int), count);
	else if (c == 'X')
		*count = convert_upperhex(va_arg(args, unsigned int), count);
	else if (c == '%')
		*count += convert_char('%');
	return (*count);
}
