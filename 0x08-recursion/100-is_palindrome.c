#include "main.h"

/**
 * _strlen_recursion - This returns the length of a string.
 * @s: string
 *
 * Return: the length of a string.
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}

/**
 * comparator - This compares each character of the string.
 * @s: The string
 * @n1: The smallest iterator.
 * @n2: The biggest iterator.
 *
 * Return: This returns nothing
 */
int comparator(char *s, int n1, int n2)
{
	if (*(s + n1) == *(s + n2))
	{
		if (n1 == n2 || n1 == n2 + 1)
			return (1);
		return (0 + comparator(s, n1 + 1, n2 - 1));
	}
	return (0);
}

/**
 * is_palindrome - This detects if a string is a palindrome.
 * @s: The string.
 *
 * Return: 1 if s is a palindrome, 0 if not.
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (comparator(s, 0, _strlen_recursion(s) - 1));
}
