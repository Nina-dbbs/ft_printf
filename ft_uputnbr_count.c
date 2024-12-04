/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uputnbr_count.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndabbous <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 12:16:28 by ndabbous          #+#    #+#             */
/*   Updated: 2024/12/03 12:16:33 by ndabbous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_uputnbr_count(unsigned int nb)
{
	int		len;
	long	bis;

	bis = nb;
	len = 1;
	if (bis >= 10)
	{
		len = len + ft_uputnbr_count(bis / 10);
		bis = bis % 10;
	}
	if (bis < 10)
		ft_putchar_count(bis + 48);
	return (len);
}

/*#include<stdio.h>

int main()
{
	unsigned int c = -2147483648;
    int intmin = ft_putnbr_unsigned(c);
    write(1, "\n", 1);
    int intmax = ft_putnbr_unsigned(2147483647);
    write(1, "\n", 1);
    int zero = ft_putnbr_unsigned(0);
    write(1, "\n", 1);
    int pos = ft_putnbr_unsigned(6677);
    write(1, "\n", 1);
    int neg = ft_putnbr_unsigned(-2578);
    write(1, "\n", 1);
    printf("intmin = %d, intmax = %d, zero = %d, pos = %d, neg = %d",
 intmin, intmax, zero, pos, neg);
    write(1, "\n", 1);
    return (0);
}*/
