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

	printf("Size of a char: %lu byte(s)", sizeof(f));
	printf("Size of an int: %lu byte(s)", sizeof(g));
	printf("Size of a long int: %lu byte(s)", sizeof(w));
	printf("Size of a long long int: %lu byte(s)", sizeof(q));
	printf("size of a float: %lu byte(s)", sizeof(y));
	return (0);
}
