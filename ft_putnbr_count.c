/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_count.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndabbous <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 18:09:11 by ndabbous          #+#    #+#             */
/*   Updated: 2024/12/02 17:56:37 by ndabbous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_count(int nbr)
{
	int	len;

	len = 1;
	if (nbr == -2147483648)
	{
		write(1, "-2", 2);
		nbr = 147483648;
		len = 3;
	}
	if (nbr < 0)
	{
		write(1, "-", 1);
		nbr = -nbr;
		len = 2;
	}
	if (nbr >= 10)
	{
		len = len + ft_putnbr_count(nbr / 10);
		nbr = nbr % 10;
	}
	if (nbr < 10)
		ft_putchar_count(nbr + 48);
	return (len);
}

/*#include<stdio.h>

int	main()
{
	int	intmin = ft_putnbr_count(-2147483648, 0);
	write(1, "\n", 1);
	int	intmax = ft_putnbr_count(2147483647, 1);
	write(1, "\n", 1);
	int	zero = ft_putnbr_count(0, 0);
	write(1, "\n", 1);
	int	pos = ft_putnbr_count(6677, 0);
	write(1, "\n", 1);
	int neg = ft_putnbr_count(-2578, 3);
	write(1, "\n", 1);
	printf("intmin = %d, intmax = %d, zero = %d, pos = %d
, neg = %d", intmin, intmax, zero, pos, neg);
	write(1, "\n", 1);
	return (0);
}*/
