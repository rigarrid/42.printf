/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_start.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rigarrid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 11:47:31 by rigarrid          #+#    #+#             */
/*   Updated: 2022/11/16 10:13:26 by rigarrid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../includes/ft_printf.h"

/*
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
