// Includes
#include <stdio.h>

// Function Prototypes
int power(int, int);

// Main
int main() {
  int i;

  for ( i = 0; i < 10; i++ )
    printf ( "%3d, %10d, %10d \n", i, power(2, i), power(-3, i));
}

// Functions
int power(int val, int pwr){
  int i, output;
  output = 1;

  for ( i = 0; i < pwr; i++ )
    output *= val;

  return output;
}