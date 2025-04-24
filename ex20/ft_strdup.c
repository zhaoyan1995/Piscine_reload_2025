/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yanzhao <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 18:44:24 by yanzhao           #+#    #+#             */
/*   Updated: 2025/04/22 18:59:09 by yanzhao          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*str)
	{
		i++;
		str++;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	int		size;
	int		i;
	char	*result;

	size = ft_strlen(src);
	result = malloc(size + 1);
	i = 0;
	while (i < size)
	{
		result[i] = src[i];
		i++;
	}
	result[i] = '\0';
	return (result);
}

/*#include <stdio.h>

int	main(void)
{
	char	*str = "Hello World\n";
	char	*result;

	result = ft_strdup(str);
	printf("result = %s", result);
	free(result);
	return (0);
}*/
