/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yanzhao <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 21:18:05 by yanzhao           #+#    #+#             */
/*   Updated: 2025/04/22 21:28:23 by yanzhao          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int (*f)(char *))
{
	int	i;
	int	result;

	i = 0;
	result = 0;
	while (tab[i])
	{
		if ((*f)(tab[i]) == 1)
			result++;
		i++;
	}
	return (result);
}

/*int	apply_f(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == 'a')
			return (1);
		i++;
	}
	return (0);
}

#include <stdio.h>

int	main(int argc, char **argv)
{
	if (argc > 1)
	{
		printf("result = %d\n", ft_count_if(argv, &apply_f));

	}	
	return (0);
}*/
