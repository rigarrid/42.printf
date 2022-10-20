/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rigarrid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 10:11:17 by rigarrid          #+#    #+#             */
/*   Updated: 2022/10/20 12:14:21 by rigarrid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef PRINTF_H
# define PRINTF_H

# include "../libft/libft.h"
# include <unistd.h>
# include <stdio.h>
# include <stdarg.h>
# include <stdlib.h>
# include <stddef.h>

typedef	struct s_var
{
	int	size;
	int	c;
	int	c2;
	va_list	param;
} t_var;
t_var	ft_start();
int	ft_putstr(char *str);
int	ft_putchar(int c);
int	ft_putint(int c);
int	printf(char const *str, ...);
int	ft_hex(unsigned long int num, const char f);
int	ft_putnbr(long int nb);
int	ft_unsigned(unsigned int nb);
int	ft_voidhex(void *pointer);

#endif
