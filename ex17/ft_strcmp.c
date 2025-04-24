/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yanzhao <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 17:27:28 by yanzhao           #+#    #+#             */
/*   Updated: 2025/04/22 17:43:51 by yanzhao          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i])
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (s1[i] - s2[i]);
}

/*#include <stdio.h>

int	main(void)
{
	char	*s1;
	char	*s2;

	s1 = "Hello World!";
	s2 = "Hello ";
	printf("ft_strcmp = %d", ft_strcmp(s1, s2));
	return (0);
}*/
