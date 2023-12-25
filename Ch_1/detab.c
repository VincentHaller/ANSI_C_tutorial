/* 
exchange '\t' for the appropriate number of spaces. 
*/
// includes
#include <stdio.h>

// defines
#define MAXLINE 1000
#define COLWIDTH 4

// function prototypes
int get_tab_line( char s[] );
void replace_tab_with_space( char spaceline[], char tabline[], int len );

// main 
int main()
{
	int len;
	char tab_line[MAXLINE];
	char space_line[MAXLINE];

	while ( (len = get_tab_line(tab_line)) > 0 )
	{
		replace_tab_with_space(space_line, tab_line, len);
		printf("%s", tab_line);
	}

	return 0;
}

// functions
int get_tab_line( char s[] )
{
	int c, i;

	for ( i = 0; i < MAXLINE - 1 && (c=getchar()) != EOF && c != '\n'; i++ )
		s[i] = c;

	if ( '\n' == c )
	{
		s[i] = c;
		i++;
	}

	s[i] = '\0';

	return i;
}

void replace_tab_with_space( char spaceline[], char tabline[], int len )
{
	int i, i_t, i_s;

	for ( i_t = 0; i_t < len; i_t++ )
	{
		if ( '\t' != tabline[i_t] )
		{
			spaceline[i_s] = tabline[i_t];
			i_s++;
		}
		else
		{
			for ( i = 0; i < (-i_s%COLWIDTH + COLWIDTH); i++ )
			{
				spaceline[i_s] = ' ';
				i_s++;
			}
		}
	}
}