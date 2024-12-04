/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_hexa_count.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndabbous <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 11:51:59 by ndabbous          #+#    #+#             */
/*   Updated: 2024/12/04 11:52:04 by ndabbous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putchar_hexa_base(int n, int script)
{
	char	*upper;
	char	*lower;

	upper = "0123456789ABCDEF";
	lower = "0123456789abcdef";
	if (script == 'X')
		write(1, &upper[n], 1);
	else
		write(1, &lower[n], 1);
}

int	ft_putnbr_hexa_count(int n, int script)
{
	unsigned int	bis;
	int				len;

	len = 0;
	bis = n;
	if (bis >= 16)
	{
		len = len + ft_putnbr_hexa_count(bis / 16, script);
		bis = bis % 16;
	}
	ft_putchar_hexa_base(bis, script);
	len++;
	return (len);
}

/*#include<stdio.h>

int main()
{
	int intmin = ft_putnbr_base_count(-2147483648, 0, 1);
	write(1, "\n", 1);
	int intmax = ft_putnbr_base_count(2147483647, 1, 1);
	write(1, "\n", 1);
	int zero = ft_putnbr_base_count(0, 0, 1);
	write(1, "\n", 1);
	int pos = ft_putnbr_base_count(6677, 1, 5);
	write(1, "\n", 1);
	int neg = ft_putnbr_base_count(-2578, 1, 2);
	write(1, "\n", 1);
	printf("intmin = %d, intmax = %d, zero = %d, pos = %d, neg = 
%d\n", intmin, intmax, zero, pos, neg);
	printf("%x", 6677);
	write(1, "\n", 1);
	return (0);
}*/
