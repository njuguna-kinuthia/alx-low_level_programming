#include <stdio.h>

/**
 * fibonacci3 - print 98 fibonnaci
 *
 * Return: 0
 */
void fibonacci3(void)
{
	int result, n;

	printf("1\n");
	printf("2\n");
	for (n = 3; n <= 98; n++)
	{
		result = fibonacci3(n - 1) + fibonacci3(n -2);
		printf("%d\n", result);
	}

}

/**
 * main - entry point
 *
 * Return: 0
 */
int main(void)
{
	fibonacci3();
	return (0)
}
