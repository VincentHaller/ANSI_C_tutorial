/*
rewrite a loop without using '&&' values
*/

// includes
#include <stdio.h>

// defines
#define MAXLINE 1000

// function prototypes

// main
int main()
{
	int i, c;
	char s[MAXLINE];

	int stop = 0;

	/*
	for ( i = 0; i<MAXLINE-2 && (c=getchar()) != '\n' && c != EOF; ++i )
		s[i] = c;
	s[i] = '\0';
	*/

	for ( i = 0; !stop; ++i )
	{
		if (i == MAXLINE-2)
			stop++;
		if ( (c = getchar()) == '\n' )
			stop++;
		else if ( c == EOF )
			stop++;
		else
			s[i] = c;
	}

	printf("%s\n", s);

	return 0;
}

// functions