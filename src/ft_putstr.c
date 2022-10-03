/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rigarrid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 10:10:14 by rigarrid          #+#    #+#             */
/*   Updated: 2022/09/27 09:58:05 by rigarrid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "printf.h"

/*
 * IN:
 * 		char *str = the string we want to print.
 * OUT:
 * 		int size = the number of characters we printed.
 */

int	ft_putstr(char *str)
{
	int	size;

	size = 0;
	while (str[size])
		write(1, &str[size++], 1);
	return (size);
}
