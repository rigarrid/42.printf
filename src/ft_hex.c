/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hex.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rigarrid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 10:41:52 by rigarrid          #+#    #+#             */
/*   Updated: 2022/10/19 11:16:42 by rigarrid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "printf.h"

int	ft_hex(unsigned long int num, char f)
{
	int	size;

	size = 0;
	if (num >= 16)
	{
		size += ft_hex(num / 16, f);
		size += ft_hex(num % 16, f);
	}
	else
	{
		if (num <= 9)
			size += ft_putchar(num + '0');
		else
		{
			if (f == 'X')
				size += ft_putchar(num - 10 + 'A');
			if (f == 'x')
				size += ft_putchar(num - 10 + 'a');
		}
	}
	return (size);
}
