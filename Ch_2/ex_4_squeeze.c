/*
We want to create a function that removes any char that occurs in s2 from s1.
1. get s1
2. get s2

3. search through s1 and delete if there is a match. 
*/
// includes
#include <stdio.h>

// defines
#define MAXLINE 1000

// function prototypes
int get_line(char s[]);
void str_squeeze(char s1[], char s2[]);

// main
int main()
{
	int len_1, len_2;
	char s1[MAXLINE];
	char s2[MAXLINE];
	
	printf("enter a line:\n");
	while( (len_1 = get_line(s1)) > 0 )
	{
		printf("enter exclusion chars\n");
		if ( (len_2 = get_line(s2)) > 0 )
			str_squeeze(s1, s2);
		
		printf("%s\n", s1);
	}

	return 0;
}

// functions
int get_line(char s[])
{
	int i;
	char c;

	for ( i = 0; i < MAXLINE - 1 && (c = getchar()) != EOF && c != '\n'; i++ )
		s[i] = c;
	
	if ( c=='\n' )
		s[i++] = c;

	s[i] = '\0';

	return i;
}

void str_squeeze(char s1[], char s2[])
{
	int i, j, k, b;

	for ( i=j=0; s1[i] != '\0'; i++)
	{
		for ( k=b=0; b != 1 && s2[k] != '\0'; k++ )
		{
			if (s2[k] == s1[i])
				b = 1;
		}
		if (!b)
			s1[j++] = s1[i];
	}
	s1[j] = '\0';
}




