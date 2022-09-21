/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putint.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rigarrid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 11:49:44 by rigarrid          #+#    #+#             */
/*   Updated: 2022/09/21 13:01:56 by rigarrid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "printf.h"
#include "../libft/libft.h"

int	ft_putint(int c)
{
	char	*num;
	int		con;
	int		size;

	con = 0;
	size = 0;
	num = ft_itoa(c);
	while (num[con])
	{
		write(1, &num[con++], 1);
		size++;
	}
	return (size);
}
