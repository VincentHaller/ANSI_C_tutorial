/*
Remove trailing blancs.
*/
// includes
#include <stdio.h>

// defines
#define MAXLINE 1000

// function prototypes
int get_line(char s[], int lim);
int remove_trailing_whitespaces(char s[], int len);

// main
int main() 
{
	int len;
	char line[MAXLINE];

	while ( (len = get_line(line, MAXLINE)) > 0 ) 
	{
		len = remove_trailing_whitespaces(line, len);
		printf("%s\n", line);
		printf("%d\n", len);
	}

	return 0;
}

// functions
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

int remove_trailing_whitespaces(char s[], int len) 
{
	while (len > 0 && (s[len-1] == ' ' || s[len-1] == '\t' || s[len-1] == '\n') ) 
	{
		s[len - 1] = '\0';
		--len;
	}

	return len;
}
