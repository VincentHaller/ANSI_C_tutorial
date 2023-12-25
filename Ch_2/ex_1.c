/*
Print out the max and min value of char, short and long, signed and unsigned. 
From standard headers and from calculation. 
*/
// includes
#include <stdio.h>
#include <limits.h>

// declares

// function prototypes
unsigned long power(int base, int exp);

// main
// int main()
// {
// 	printf("MIN\n");
// 	printf("unsigned char: %d\n", CHAR_MIN);
// 	printf("signed char: %d\n", SCHAR_MIN);
// 	printf("short: %d\n", SHRT_MIN);
// 	printf("int: %d\n", INT_MIN);
// 	printf("long: %ld\n", LONG_MIN);
// 	printf("\n");
// 	printf("MAX\n");
// 	printf("unsigned char: %d\n", CHAR_MAX);
// 	printf("signed char: %d\n", SCHAR_MAX);
// 	printf("short: %d\n", SHRT_MAX);
// 	printf("int: %d\n", INT_MAX);
// 	printf("long: %ld\n", LONG_MAX);
	
// 	return 0;
// }


/*
0 = 0
1 = 1
10 = 2
11 = 3
100 = 4 -> could not be max
111 = 7 -> could be max
*/
int main()
{
	unsigned long max;

	unsigned long attempt, try;
	max = 0;
	attempt = 1;

	for ( try = 0; attempt >= max; try++ )
	{
		attempt = power(2, try);
		max = attempt + (attempt - 1);
		attempt *= 2;
	}
	printf("max = \t%lu\n", max);
	printf("attempt = \t%lu\n", attempt);
	printf("2^%ld\n", try-1);

	return 0;
}

// functions
unsigned long power(int base, int exp)
{
	int i; 
	unsigned long output;
	output = 1;

	for ( i = 0; i < exp; i++ )
		output *= base;

	return output;	
}