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

char	*read_from_file(char *lake_buffer, int fd)
{
	char	*bucket_buff;
	char	*tmp;
	int		bytes_read;

	bucket_buff = malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (!bucket_buff)
		return(NULL);
	bytes_read = 1;
	while (bytes_read > 0)
	{
		bytes_read = read(fd, bucket_buff, BUFFER_SIZE);
		if (bytes_read == -1)
			return (free(bucket_buff), NULL);
		bucket_buff[bytes_read] = '\0';
		tmp = ft_strjoin(bucket_buff, lake_buffer);
		free(lake_buffer);
		lake_buffer = tmp;
		if (ft_strchr(bucket_buff, '\n'))
			break;
	}
	free(bucket_buff);
	return (lake_buffer);
}

char	*get_next_line(int fd)
{
	static char	*lake_buffer;
	char	*line;

	if (fd < 0 || read(fd, NULL, 0) < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	if (!lake_buffer)
		lake_buffer = malloc(1*sizeof(char));
	if (!ft_strchr(lake_buffer, '\n'))
		lake_buffer = read_from_file(lake_buffer, fd);
	if (!lake_buffer)
		return(free(lake_buffer), NULL);
	line = extract_line(lake_buffer);
	lake_buffer = extract_remains(lake_buffer);
	return (line);
}

char	*extract_line(char *lake_buffer)
{
	char	*tmp;
	int		size;

	size = 0;
	
}

