/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yanzhao <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 17:00:15 by yanzhao           #+#    #+#             */
/*   Updated: 2025/04/23 18:08:15 by yanzhao          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

long	ft_helper_sqrt(long result, int nb)
{
	if (result * result == nb)
		return (result);
	if (result * result > nb)
		return (0);
	return (ft_helper_sqrt(result + 1, nb));
}

int	ft_sqrt(int nb)
{
	long	result;

	if (nb <= 0)
		return (0);
	result = 1;
	result = ft_helper_sqrt(result, nb);
	return ((int)result);
}

/*#include <stdio.h>

int	main(void)
{
	int	a;

	a = -1440;
	printf("ft_sqrt(%d) = %d\n", a, ft_sqrt(a));
	a = 0;
	printf("ft_sqrt(%d) = %d\n", a, ft_sqrt(a));
	a = 214748364;
	printf("ft_sqrt(%d) = %d\n", a, ft_sqrt(a));
	a = 142539721;
	printf("ft_sqrt(%d) = %d\n", a, ft_sqrt(a));
	a = 181128197;
	printf("ft_sqrt(%d) = %d\n", a, ft_sqrt(a));
	a = 103652761;
	printf("ft_sqrt(%d) = %d\n", a, ft_sqrt(a));
	a = 45012776;
	printf("ft_sqrt(%d) = %d\n", a, ft_sqrt(a));
	a = 20457529;
	printf("ft_sqrt(%d) = %d\n", a, ft_sqrt(a));
	a = 19911339;
	printf("ft_sqrt(%d) = %d\n", a, ft_sqrt(a));
	a = 34857216;
	printf("ft_sqrt(%d) = %d\n", a, ft_sqrt(a));
	a = 112223982;
	printf("ft_sqrt(%d) = %d\n", a, ft_sqrt(a));
	a = 1370036196;
	printf("ft_sqrt(%d) = %d\n", a, ft_sqrt(a));
	a = 140095927;
	printf("ft_sqrt(%d) = %d\n", a, ft_sqrt(a));
	a = 2147483647;
	printf("ft_sqrt(%d) = %d\n", a, ft_sqrt(a));
	return (0);
}*/
