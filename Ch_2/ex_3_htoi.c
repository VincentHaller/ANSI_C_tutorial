/*
In this file we create a hexidecimal to digit converter.
*/
// includes
#include <stdio.h>

// declares
#define MAXLINE 100

// function prototypes
int return_digit(char c);
void make_lower(char *c);
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
		printf("%d\n", htoi(line, len));
	}
}

// functions
int return_digit(char c)
{
	int output; 
	output = c - '0';
	return output;
}

void make_lower(char *c)
{
	*c -= 'A' + 'a';
}

int return_higher_hex(char c)
{
	int output; 
	output = c - 'a' + 10;
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
	int i, k, output, pos;
	char c;	
	output = 0;
	for ( 
		i = len-2, pos = 0;
		i >= 0 && s[i] != 'X' && s[i] != 'x' ; 
		i-- , pos++
		)
		{
			c = s[i];
			
			if ( c >= 'A' && c <= 'F')
				make_lower(&c);
				
			if ( c >= 'a' && c <= 'f')
				k = return_higher_hex(c);
			else if (c >= '0' && c <='9')
				k = return_digit(c);

			output += k*power(16, pos);
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

