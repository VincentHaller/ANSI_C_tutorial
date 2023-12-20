#include <stdio.h>

int main() {
  int c, nwhite, nother;
  int numbers[10];
  
  nwhite = nother = 0;

  for ( c = 0; c < 10; c++ )
    numbers[c] = 0;

  while ( (c = getchar()) != EOF ){
    if ( c >= '0' && c <= '9' )
      ++numbers[c - '0'];
    else if ( c == ' ' || c == '\t' || c == '\n' )
      ++nwhite;
    else
      ++nother;
  }

  printf("digits:");
  for ( c = 0; c < 10; c++ )
    printf("\t%d: %d,\n", c, numbers[c]);
  printf("whites: %d,\nother: %d\n", nwhite, nother);  

  return 0;
}