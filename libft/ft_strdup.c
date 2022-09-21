/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rigarrid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 16:08:18 by rigarrid          #+#    #+#             */
/*   Updated: 2022/06/27 16:24:56 by rigarrid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

char	*ft_strdup(const char *s1)
{
	size_t	size;
	char	*result;

	size = ft_strlen(s1) + 1;
	result = malloc(sizeof(char) * size);
	if (result == NULL)
		return (NULL);
	ft_strlcpy(result, s1, size);
	return (result);
}
