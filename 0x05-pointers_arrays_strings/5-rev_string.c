#include "main.h"
/**
 * rev_string - this reserve a string
 * @s: pointer
 * Return: void
 */
void rev_string(char *s)
{
	int c = 0;
	int i;
	char rv = s[0];

	while (s[c] != '\0')
		c++;

	for (i = 0; i < c; i++)
	{
		c--;
		rv = s[i];
		s[i] = s[c];
		s[c] = rv,
	}
}
