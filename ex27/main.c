/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yanzhao <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 12:18:37 by yanzhao           #+#    #+#             */
/*   Updated: 2025/04/23 13:33:34 by yanzhao          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

void	ft_write_fd(int fd)
{
	int		byte_read;
	char	c;

	byte_read = read(fd, &c, sizeof(c));
	while (byte_read > 0)
	{
		write(1, &c, 1);
		byte_read = read(fd, &c, sizeof(c));
	}
}

int	main(int argc, char **argv)
{
	int		fd;

	if (argc != 2)
	{
		if (argc == 1)
			write(2, "File name missing.\n", 19);
		else
			write(2, "Too many arguments.\n", 20);
		return (1);
	}
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		write(2, "Cannot read file.\n", 18);
		return (1);
	}
	ft_write_fd(fd);
	close(fd);
	return (0);
}
