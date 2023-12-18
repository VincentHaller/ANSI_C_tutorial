#include <stdio.h>

#define LOWER -40
#define UPPER 120
#define STEP 20

int main(){
    float fahr, celcius;

    printf("Fahrenheit to Celcius conversion\n");
    for ( fahr = LOWER; fahr < UPPER; fahr += STEP ){
        celcius = (5.0/9.0) * (fahr - 32.0);
        printf("%3.0f: %7.1f\n", fahr, celcius);
    }

    printf("\nCelcius to Fahrenheit conversion\n");
    for ( celcius = LOWER; celcius < UPPER; celcius += STEP ){
        fahr = celcius * (9.0/5.0) + 32.0;
        printf("%3.0f: %7.1f\n", celcius, fahr);
    }
}
