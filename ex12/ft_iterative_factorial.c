/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yanzhao <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 16:52:33 by yanzhao           #+#    #+#             */
/*   Updated: 2025/04/22 16:58:56 by yanzhao          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	result;

	if (nb < 0 || nb > 12)
		return (0);
	i = 1;
	result = 1;
	while (i <= nb)
	{
		result = result * i;
		i++;
	}
	return (result);
}

/*#include <stdio.h>

int	main(void)
{
	printf("result = %d\n", ft_iterative_factorial(2));
	return (0);
}*/
