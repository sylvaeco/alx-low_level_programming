#include <stdio.h>
#include <unistd.h>

/**
 * main - Entry point
 *
 * Description: Displays the words in the write function
 *
 * Return: Outputs 0 in this instance (Sucess)
 *
 * This program takes an array and feeds it to the write function
 */

int main(void)
{
	write(1, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}

