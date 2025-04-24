/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yanzhao <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 21:02:17 by yanzhao           #+#    #+#             */
/*   Updated: 2025/04/22 21:17:31 by yanzhao          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int	i;

	i = 0;
	while (i < length)
	{
		(*f)(tab[i]);
		i++;
	}
}

/*#include <unistd.h>

void	ft_putnbr(int nbr)
{
	char	c;

	if (nbr == 0)
		write(1, "0", 1);
	if (nbr == -2147483648)
	{
		write(1, "-2147483648",11);
		return;
	}
	if (nbr < 0)
	{
		write(1, "-", 1);
		nbr = -nbr;
	}
	if (nbr > 9)
		ft_putnbr(nbr / 10);
	c = nbr % 10 + 48;
	write(1, &c, 1);
}

int	main(void)
{
	int	tab[4];

	tab[0] = 78;
	tab[1] = -789;
	tab[2] = -2147483648;
	tab[3] = 2147483647;

	ft_foreach(tab, 4, &ft_putnbr);
	return (0);
}*/
