/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_count.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndabbous <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 17:20:23 by ndabbous          #+#    #+#             */
/*   Updated: 2024/12/03 11:01:15 by ndabbous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar_count(int c)
{
	int	len;	

	len = 1;
	write(1, &c, 1);
	return (len);
}

/*#include <stdio.h>
int	main()
{
	int	c = 'a';
	int d = '%';
	printf("%c\n", ft_putchar_count(c));
	printf("%c\n", ft_putchar_count(d));
	return (0);
}*/
