#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: character
 * @s2: character
 *
 * Return: outputs the difference of s1 and s2
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (*(s1 + i) && *(s2 + i) && (*(s1 + i) == *(s2 + i)))
		i++;
	return (*(s1 + i) - *(s2 + i));
}
