/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yanzhao <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 15:22:37 by yanzhao           #+#    #+#             */
/*   Updated: 2025/04/22 15:27:50 by yanzhao          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*#include <stdio.h>

int	main(void)
{
	int	x;
	int	y;
	int	div;
	int	mod;

	x = 47;
	y = 10;
	ft_div_mod(x, y, &div, &mod);
	printf("div = %d\n", div);
	printf("mod = %d\n", mod);
	return (0);
}*/
