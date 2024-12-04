/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ptr_count.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndabbous <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 16:04:16 by ndabbous          #+#    #+#             */
/*   Updated: 2024/12/02 17:55:14 by ndabbous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putchar_hexa(long n)
{
	char	*hexa;

	hexa = "0123456789abcdef";
	write(1, &hexa[n], 1);
}

int	ft_ptr_hexa(unsigned long nb)
{
	unsigned long	bis;
	int				len;

	bis = nb;
	len = 0;
	if (bis >= 16)
	{
		len = len + ft_ptr_hexa(bis / 16);
		bis = bis % 16;
	}
	ft_putchar_hexa(bis);
	len++;
	return (len);
}

int	ft_ptr_count(unsigned long nb)
{
	int	len;

	len = 2;
	if (nb == 0)
		return ((int)write(1, "(nil)", 5));
	else
		write(1, "0x", 2);
	len += ft_ptr_hexa(nb);
	return (len);
}

/*#include<stdio.h>

int main()
{
	char	*c = "123456789";
	//int	*d = "abcdefgh";
	ft_ptr_count((unsigned long)c);
	printf("\n%p", c);
	return (0);
}*/
