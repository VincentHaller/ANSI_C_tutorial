#include <stdio.h>

int main() {
  int c, max_occurance;
  int ndigits[10];

  max_occurance = 0;

  for ( c = 0; c < 10; c++ )
    ndigits[c] = 0;

  while ( (c = getchar()) != EOF )
    if ( c >= '0' && c <= '9' )
      ++ndigits[c - '0'];
  
  for ( c = 0; c < 10; c++)
    max_occurance =  max_occurance >= ndigits[c] ? max_occurance : ndigits[c];
  
  while (max_occurance > 0) {
    printf("%4d |", max_occurance);
    for ( c = 0; c < 10; c++ ){
      if ( ndigits[c] >= max_occurance )
        printf("#|");
      else
        printf(" |");
    }
    printf("\n");
    --max_occurance;
  }
  printf("     |");
  for ( c = 0; c < 10; c++ )
    printf("%d|", c);
  printf("\n");

  return 0;
}