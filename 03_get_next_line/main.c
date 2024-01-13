#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>

int main(void)
{
	int	fd;
	char	*line;
	int	count;

	count = 0;
	fd = open("example.txt", O_RDONLY);
	line = get_next_line(fd);
	count++;
	printf("[%d]:%s\n", count, line);
	line = NULL;

	close(fd);
	return (0);
}