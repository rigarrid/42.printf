/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rigarrid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 10:13:12 by rigarrid          #+#    #+#             */
/*   Updated: 2022/09/21 10:33:56 by rigarrid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "printf.h"

int	print(char const *str, ...)
{
	t_var var;

	var = ft_start();
	va_start(var.param, str); //Se pone primero y  se introduce  la lista
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
	char *x;
	int	a;

	a = 5;
	x = "world";
	printf("Numero de caracteres: %d\n", print("Hello %s, number %i\n", x, a));
	return (0);
}
