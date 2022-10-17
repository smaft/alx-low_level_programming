#include <stdio.h>
/**
 * Main - print
 * Return : Always 0
 */
int main(void)
{
	char ll;

	for (ll = 'z'; ll >= 'a'; ll--)
		putchar(ll);

	putchar('\n');

	return (0);
}
