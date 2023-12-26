/*
In this file we create a hexidecimal to digit converter.
*/
// includes
#include <stdio.h>

// declares
#define MAXLINE 100

// function prototypes
int return_digit(char c);
char make_lower(char c);
int return_higher_hex(char c);
int read_hex(int s[]);
int htoi(int s[]);

// main
int main()
{
	int c;
	int s[MAXLINE];  

}
// functions
int return_digit(char c)
{
	int output; 
	output = c - '0';
	return output;
}

char make_lower(char upper)
{
	char lower;
	lower = upper - 'A' + 'a';
	return lower;
}

int return_higher_hex(char c)
{
	int output; 
	output = c - 'a' + 11;
	return output;	
}

int read_hex(int s[])
{
	int i;
	char c;

	for ( i = 0; i < MAXLINE - 1 && (c=getchar()) != '\n' && c != EOF; ++i )
	{
		if ( c >= 'A' && c <= 'F' )
			c = make_lower(c);

		if ( c >= '0' && c <= '9' )
		{
			s[i] = return_digit(c);
		}
		else if ( c >= 'a' && c <= 'f' )
		{
			s[i] = return_higher_hex(c);
		}
	}
}

int htoi(int s[])
{

}



