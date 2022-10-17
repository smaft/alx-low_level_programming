#include <stdlib.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - printf nbr
 * Return : Always
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is ziro\n", n);
	}
	else
	{
		printf("%d negative\n", n);
	}

	return (0);
}

