#include <stdio.h>
#include <stdlib>
#include <sys/stat.h>
#include <sys/types.h>
#include <fontl.h>
#include <unistd.h>

void check_IO_stat(int stat, int fd, char *filename, char mode);
/**
 * main - funct copies the content of one file to another
 * @argc: the argument count
 * @argv: the argument passed
 * Return: 1 on success, exit otherwise
 */

int main(int argc, char *argv[])
{
	int arc, dest, n_read = 1024, write, close_arc, close_dest;
	unsigned int 
