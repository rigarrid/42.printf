/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsigned.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rigarrid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 11:17:01 by rigarrid          #+#    #+#             */
/*   Updated: 2022/10/04 11:57:16 by rigarrid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "printf.h"

int	ft_unsigned(unsigned int nb)
{
	int	size;

	size = 0;
	if (nb < 0)
	{
		size += ft_putnbr(nb *= -1);
	}
	else if (nb > 9)
	{
		size += ft_putnbr(nb / 10);
		size += ft_putnbr(nb % 10);
	}
	else
		size += ft_putchar(nb + 48);
	return (size);
}
