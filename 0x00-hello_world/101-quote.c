#include <stdio.h>
#include <unistd.h>

/*
 * main - Entry point
 *
 * Description: 'and that piece of art is useful" - Dora Korpar, 2015-10-19'
 *
 * Return: Outputs 0 in this instance (Sucess)
 *
 * This program takes an array and feeds it to the write function
 */

int main(void) 
{
	const char msg[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	write(2, msg, sizeof(msg) - 1);
	return (1);
}

