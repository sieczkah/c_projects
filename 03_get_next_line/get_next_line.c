/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsieczka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 17:12:23 by hsieczka          #+#    #+#             */
/*   Updated: 2024/01/12 17:12:24 by hsieczka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*read_from_file(int fd)
{
	int	bytes_read;
	char	*cup_buffer;
	static int	count=1;

	printf("[%d] malloc", count++);
	cup_buffer = malloc((BUFFER_SIZE+ 1) * sizeof(char));
	if (cup_buffer == NULL)
		return (NULL);
	cup_buffer[3] = '\0';
	bytes_read = read(fd, cup_buffer, BUFFER_SIZE);
	if (bytes_read <= 0)
		return (free(cup_buffer), NULL);
	return (cup_buffer);
}

char	*get_next_line(int fd)
{
	char	*lake_buffer;

	lake_buffer = read_from_file(fd);
	return (lake_buffer);
}
