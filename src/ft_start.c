/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_start.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rigarrid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 11:47:31 by rigarrid          #+#    #+#             */
/*   Updated: 2022/09/27 09:56:39 by rigarrid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "printf.h"

/*
 * OUT:
 * 		t_var var = Struct with the variables initialized
 */

t_var	ft_start()
{
	t_var var;
	var.size = 0;
	var.c = 0;
	var.c2 = 0;
	return (var);
}
