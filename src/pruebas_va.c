/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pruebas_va.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rigarrid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 12:58:25 by rigarrid          #+#    #+#             */
/*   Updated: 2022/09/19 11:13:35 by rigarrid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "printf.h"

/*
 * IN:
 *   char *n = The string that contains the information.
 * OUT:
 *   int c3 = The number of letters that the function printed.
 */

int	print(char const *str, ...)
{
	int		c;
	int		c2;
	int		size;
	//void	*s;
	va_list param;	//Inicializamos la lista

	va_start(param, str); //Se pone primero y  se introduce  la lista
	c = 0;				//y la string que va a leer.
	c2 = 0;
	size = 0;
	while (str[c])
	{
		if (str[c] == '%' && str[c + 1] == 's')
		{
			size += ft_putstr(va_arg(param, char *), c);
			//c += 2;
		}
		/*else if (str[c] == '%' && str[c + 1] == 'c')
		{
			write(1, &s[c2], 1);
			size = c + 1;
			c += 2;
		}*/
		write(1, &str[c], 1);
		size++;
		c++;
	}
	va_end(param);
	return (size);
}

int	main()
{
	char *x;

	x = "world";
	//print("Hello %s\n", x);
	printf("Numero de caracteres: %d\n", print("Hello %s\n", x));
	return (0);
}
