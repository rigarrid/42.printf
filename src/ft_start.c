/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_start.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rigarrid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 11:47:31 by rigarrid          #+#    #+#             */
/*   Updated: 2022/11/21 10:52:15 by rigarrid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../includes/ft_printf.h"

/*
 * IN:
 * 		int a = the value we are gonna use to initialize the variables
 * OUT:
 * 		t_var var = Struct with the variables initialized
 */

t_var	ft_start(int a)
{
	t_var	var;

	var.size = a;
	var.c = a;
	return (var);
}
