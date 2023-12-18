#include <stdio.h>

int main(){
    int c;
    int end; 
    end = EOF;
    
    while ( (c = getchar()) != EOF){

        putchar(c);
        printf("%d;\n", end);
    }
    return 0;
}