/*
Write a function that gives the first position of any letter that occurs in s2 in s1

1. get s1
2. get s2

print position (-1) if no position.
*/
// includes
#include <stdio.h>

// defines
#define MAXLINE 1000

// function prototypes
int get_line(int s[]);
int overlap_pos(int s1[], int s2[]);

// main
int main()
{
	int len_1, len_2, pos;
	int s1[MAXLINE];
	int s2[MAXLINE];
	len_1 = 1;

	while ( len_1 > 0 )
	{
		printf("enter a line\n");
		len_1 = get_line(s1);
		printf("enter search values\n");
		if ( (len_2 = get_line(s2))> 0)
			pos = overlap_pos(s1, s2);	
		printf("%d\n", pos);
	}
	
	return 0;
	
}

// functions
int get_line(int s[])
{
	int i;
	char c;

	for ( i = 0; i < MAXLINE - 1 && (c = getchar()) != EOF && c != '\n'; i++ )
		s[i] = c;
	
	s[i] = '\0';

	return i;
}

int overlap_pos(int s1[], int s2[])
{
	int i, j, b;

	for ( i=b=0; !b && s1[i] != '\0'; i++ )
		for ( j=0; !b && s2[j] != '\0'; j++)
			if ( s1[i] == s2[j] )
				b = 1;

	if (b == 1)
		return i;
	else
	{	
		return -1;
	}
}