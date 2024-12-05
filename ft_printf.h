/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbruha <tbruha@student.42Prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 17:25:27 by tbruha            #+#    #+#             */
/*   Updated: 2024/08/05 17:25:29 by tbruha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

// HEADERS

# include <stdarg.h>
# include "libft/libft.h"

// ** // PART 1

int		ft_printf(const char *str, ...);
int		specifier_conversion(char c, va_list args, int *count);
int		convert_char(char c);
int		convert_int(int nb);
int		convert_string(char *str);
int		convert_unsignedint(unsigned int nb);
int		convert_hex(unsigned long int nb, int *count);
int		convert_upperhex(unsigned int nb, int *count);
void	deci_to_hex(unsigned int nb);
void	deci_to_upperhex(unsigned int nb);
int		convert_pointer(unsigned long int ptr, int *count);
void	ptr_to_hex(unsigned long ptr);
char	*ft_itoa_unsigned(unsigned int n);

#endif
