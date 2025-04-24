/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yanzhao <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 19:00:21 by yanzhao           #+#    #+#             */
/*   Updated: 2025/04/22 19:11:57 by yanzhao          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	size;
	int	i;
	int	*result;

	size = max - min;
	if (size <= 0)
		return (NULL);
	result = malloc(size * sizeof(int));
	if (!result)
		return (NULL);
	i = 0;
	while (i < size)
	{
		result[i] = min + i;
		i++;
	}
	return (result);
}

/*#include <stdio.h>

int	main(void)
{
	int	*result;
	int	i;
	int	x;
	int	y;

	x = 3;
	y = 8;
	result = ft_range(x, y);
	if (result == NULL)
	{
		printf("result = NULL\n");
		return (1);
	}
	i = 0;
	while (i < y - x)
	{
		printf("result[%d] = %d\n", i, result[i]);
		i++;
	}
	free(result);
	return (0);
}*/
