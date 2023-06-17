#include <stdio.h>
/**
*main - entry point
*
*Return: always 0 (success)
*/
int main(void)
{
	char f;
	int g;
	long int w;
	long long int q;
	float y;

	printf("Size of a char: %lu byte(s)\n", sizeof(f));
	printf("Size of an int: %lu byte(s)\n", sizeof(g));
	printf("Size of a long int: %lu byte(s)\n", sizeof(w));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(q));
	printf("size of a float: %lu byte(s)\n", sizeof(y));
	return (0);
}
