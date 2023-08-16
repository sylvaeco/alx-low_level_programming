#include <stdio.h>

/**
<<<<<<< HEAD
* main - causes an infinite loop
* Return: 0
*/

=======
 * main - causes an infinite loop
 * Return: 0
 */
>>>>>>> c2b27d986d78eaf0b19f2d2b7b5feb7e07a21967
int main(void)
{
	int i;

	printf("Infinite loop incoming :(\n");

	i = 0;

	/* while (i < 10)
	 * {
	 * putchar(i);
	 * }
	 */
	printf("Infinite loop avoided! \\o/\n");
	
	return (0);
}
