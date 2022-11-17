/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rigarrid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 12:24:31 by rigarrid          #+#    #+#             */
/*   Updated: 2022/11/16 10:57:51 by rigarrid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "../libft/libft.h"
# include <unistd.h>
# include <stdio.h>
# include <stdarg.h>
# include <stdlib.h>
# include <stddef.h>

typedef struct s_var
{
	int		size;
	int		c;
	va_list	param;
}	t_var;
t_var	ft_start(int a);
int		ft_putstr(char *str);
int		ft_putchar(int c);
int		ft_printf(char const *str, ...);
int		ft_hex(unsigned long int num, const char f);
int		ft_putnbr(long int nb);
int		ft_unsigned(unsigned int nb);
int		ft_voidhex(void *pointer);

#endif
