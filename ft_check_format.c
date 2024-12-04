/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_format.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndabbous <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 12:11:44 by ndabbous          #+#    #+#             */
/*   Updated: 2024/12/03 12:17:18 by ndabbous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_check_format(char c, va_list args)
{
	int	len;

	(void)args;
	len = 0;
	if (c == 'c')
		len = ft_putchar_count((int)va_arg(args, int));
	else if (c == 's')
		len = ft_putstr_count((char *)va_arg(args, char *));
	else if (c == 'p')
		len = ft_ptr_count((unsigned long)va_arg(args, unsigned long));
	else if (c == 'd' || c == 'i')
		len = ft_putnbr_count((int)va_arg(args, int));
	else if (c == 'u')
		len = ft_uputnbr_count((unsigned int)va_arg(args, unsigned int));
	else if (c == 'x')
		len = ft_putnbr_hexa_count((int)va_arg(args, int), 'x');
	else if (c == 'X')
		len = ft_putnbr_hexa_count((int)va_arg(args, int), 'X');
	else if (c == '%')
		len = ft_putchar_count('%');
	else
		return (-1);
	return (len);
}
