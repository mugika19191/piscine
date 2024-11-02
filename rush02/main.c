#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include "header.h"
#define BUFFER_SIZE 1024
int	count_lines(int	fd)
{
	char	buffer[BUFFER_SIZE];
	ssize_t	bytes_read;
	int	line_count;
	ssize_t	i;
	
	line_count = 0;
	while ((bytes_read = read(fd, buffer, BUFFER_SIZE)) > 0)
	{
		i = 0;
		while ( i < bytes_read)
		{
			if (buffer[i] == '\n') 
				line_count++;
			i++;
		}
	}
	if (bytes_read == -1)
	{
		perror("Error reading file");
		close(fd);
		return -1;
	}
	close(fd);
	return line_count;
}
int	is_unsigned_num(char *num)
{
	int	i;
	
	i = 0;
	while (num[i])
	{
		if (num[i] >= '0' && num[i] <= '9')
			i++;
		else
			return (0);
	}
	return (1);
}
void read_mode(char *number)
{
	int	fd;
	char	buffer[1000];
	ssize_t	bytesRead;
	
	fd = open("numbers.dict", O_RDONLY);
	if (fd == -1)
	{
		write(1, "Error\n", 6);
		return ;
	}
	printf("%d\n",count_lines(fd));
	return;
}
void write_mode(char *number, char *text)
{
	return;
}
int	main(int i, char **args)
{	
	/*struct s_dic myStruct;
	myStruct.num=10;
	myStruct.name="ten";*/
	if (i >= 2)
	{
		if (!is_unsigned_num(args[1]))
		{
			write(1, "Error\n", 6);
			return (0);
		}
	}
	if (i == 2)
		read_mode(args[1]);
	else if (i == 3)
		write_mode(args[1], args[2]);
	else
		write(1, "Error\n", 6);
	return (0);
}
