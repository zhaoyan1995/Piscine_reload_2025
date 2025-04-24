/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yanzhao <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 17:25:18 by yanzhao           #+#    #+#             */
/*   Updated: 2025/04/22 17:26:39 by yanzhao          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

/*#include <stdio.h>

int	ft_strlen(char *str);

int	main(void)
{
	printf("ft_strlen = %d\n", ft_strlen("Hello World!"));
	return (0);
}*/
