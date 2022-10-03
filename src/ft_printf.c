/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rigarrid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 10:45:14 by rigarrid          #+#    #+#             */
/*   Updated: 2022/10/03 11:44:05 by rigarrid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "printf.h"

/*
 * IN:
 * 		char const *str = The string that contains the information
 * 	OUT:
 * 		int	var.size = the number of characters that the function printed
 */

int	ft_printf(char const *str, ...)
{
	t_var	var;

	var = ft_start();
	va_start(var.param, str);
	while (str[var.c])
	{
		if (str[var.c] == '%')
		{
			if (str[var.c + 1] == 's')
				var.size += ft_putstr(va_arg(var.param, char *));
			else if (str[var.c + 1] == 'c')
				var.size += ft_putchar(va_arg(var.param, int));
			else if (str[var.c + 1] == 'i')
				var.size += ft_putint(va_arg(var.param, int));
			else if (str[var.c + 1] == 'u')
				var.size += ft_unsigned(va_arg(var.param, unsigned int));
			else if (str[var.c + 1] == 'X' || str[var.c + 1] == 'x')
				var.size += ft_hex(va_arg(var.param, unsigned int), str[var.c + 1]);
			else if (str[var.c + 1] == 'd')
				var.size += ft_putnbr(va_arg(var.param, int));
			else if (str[var.c + 1] == '%')
				var.size += ft_putchar('%');
			var.c += 2;
		}
	write(1, &str[var.c], 1);
	var.size++;
	var.c++;
	}
	va_end(var.param);
	return (var.size);
}

int	main()
{
	int a = -984;
	void *b = "984";
	printf("Numero de caracteres: %d\n", ft_printf("Hello %u\n", a));
	printf("Void: %p\n", b);	
	return (0);
}
