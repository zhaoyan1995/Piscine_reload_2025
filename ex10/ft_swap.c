/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yanzhao <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 15:17:23 by yanzhao           #+#    #+#             */
/*   Updated: 2025/04/22 15:21:44 by yanzhao          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

/*#include <stdio.h>

int	main(void)
{
	int	x;
	int	y;

	x = 74;
	y = 265;
	printf("before ft_swap x = %d y = %d\n", x, y);
	ft_swap(&x, &y);
	printf("before ft_swap x = %d y = %d\n", x, y);
	return (0);
}*/
