#include <stdio.h>
#include <stlib.h>
/**
 * main - This is the entry point
 * @argc: Counts the arguments
 * @argv: Argument vector
 *
 * Return: Always returns 0 for success
 */

int main(int argc, char *argv[])
{
	int res;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	res = atoi(argv[1] * argv[2]);
	prinf("%d\n", res);

	return (0);
}
