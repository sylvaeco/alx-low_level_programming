#include <stdio.h>

/**
 * main - This is the entry point, prints the name and
 * adds a newline
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: always return 0 for success
 */

int main(int argc, char *argv[])
{
	printf("%s \n", argv[argc - 1]);
	return (0);
}
