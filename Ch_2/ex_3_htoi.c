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
int htoi(char s[], int len);
int get_line(char s[], int lim);
int power(int, int);

// main
int main()
{
	int i, c, len;
	char line[MAXLINE];  

	while ( (len = get_line(line, MAXLINE)) > 1 )
	{
		printf("%d", htoi(line, len));
	}
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

int get_line(char s[], int lim) 
{
  int c, i;

  for ( i = 0; i < lim-1 && (c = getchar()) != EOF && c != '\n'; i++ )
    s[i] = c;

  if ( c == '\n' )
	{
    s[i] = c;
    i++;
  }

  s[i] = '\0';

  return i;
}

int htoi(char s[], int len)
{
	int i, c, output, pos;
	output = 0;
	for ( 
		i = len-1, pos = 0;
		i >= 0 && s[i] != 'X' && s[i] != 'x' ; 
		i-- , pos++
		)
		{
			c = s[i];
			if ( c >= 'A' && c <= 'F')
				c = make_lower(c);
			if ( c >= 'a' && c <= 'f')
				c = return_higher_hex(c);
			else if (c >= '0' && c <='9')
				c = return_digit(c);
			output += c*power(16, pos);
		}
	return output;
}

int power(int val, int pwr){
  int i, output;
  output = 1;

  for ( i = 0; i < pwr; i++ )
    output *= val;
  
	return output;
}

