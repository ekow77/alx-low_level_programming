#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf(stderr, "Size of a char: %i byte(s)\n", sizeof(char));
	printf(stderr, "size of an int: %i byte(s)\n", sizeof(int));
	printf(stderr, "Size of a long int: %i byte(s)\n", sizeof(long int));
	printf(stderr, "Size of a long long int: %i byte(s)\n", sizeof(long long int));
	printf(stderr, "Size of a float: %i byte(s)\n", sizeof(float));
	return (0);
}
