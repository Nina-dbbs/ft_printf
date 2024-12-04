/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndabbous <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 17:43:42 by ndabbous          #+#    #+#             */
/*   Updated: 2024/12/03 18:58:27 by ndabbous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

int		ft_putchar_count(int c);
int		ft_putstr_count(char *str);
int		ft_putnbr_count(int nbr);
int		ft_uputnbr_count(unsigned int nb);
int		ft_putnbr_hexa_count(int n, int script);
int		ft_ptr_count(unsigned long nb);
int		ft_check_format(char c, va_list args);
int		ft_printf(const char *str, ...);

#endif
