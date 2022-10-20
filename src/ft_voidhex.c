/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_voidhex.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rigarrid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 09:39:07 by rigarrid          #+#    #+#             */
/*   Updated: 2022/10/19 11:45:28 by rigarrid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "printf.h"

int	ft_voidhex(void *pointer)
{
	int	size;
	
	size = write(1, "0x", 2);
	size += ft_hex((unsigned long )pointer, 'x');
	return (size);
}

/*int main()
{
	int	a;
	void *p;

	a = 100;
	p = &a;
	ft_voidhex(p);
	return (0);
}*/
