#include <stdio.h>
/**
 * main - This is the entry point, prints the values of argv
 * and adds a newline
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: always return 0 for success
 */

int main(int argc, char *argv[])
{
	int i;
	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
