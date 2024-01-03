/*
Write a function setbits(x, p, n, y) that return x with the n bits that begin at 
position p set to the rightmost n bits of y, leaving the other bits unchanged. 
*/
// includes
#include <stdio.h>
#include <limits.h>

// defines

// function prototypes
// unsigned char setbits(
// 	unsigned char x, // original set of bits.
// 	unsigned char p, // start copy bits from y. 
// 	unsigned char n, // copy these right hand side bits from y.
// 	unsigned char y // se second set of bits. 
// 	);

void ctob(
	unsigned char c,
	char b[]
);

unsigned char power(unsigned char base, unsigned char exponential);

// main
int main()
{
	char b[CHAR_BIT+1];
	b[8] = '\0';
	unsigned char c;
	c = 255;
	ctob(c, b);
	printf("%s\n", b);
	return 0;
}
// functions
// unsigned char setbits(
// 	unsigned char x, 
// 	unsigned char p, 
// 	unsigned char n, 
// 	unsigned char y
// )
// {
// 	unsigned char out;


// 	return out;
// }

void ctob( unsigned char c, char b[] )
{
	unsigned char bit, pow;
	char i;
		
	b[8] = '\0';

	for ( i = 0; i < CHAR_BIT; i++)
	{
		pow = power(2, CHAR_BIT -1 -i);
		bit = c/pow;
		if (bit == 1)
		{
			b[i] = '1';
			c -= pow;
		}
		else
			b[i] = '0';
	}

}

unsigned char power (unsigned char base, unsigned char exponential)
{
	unsigned char output, i; 
	output = 1; 
	for ( i = 0; i < exponential; i++ )	
		output *= base;
	
	return output;
}