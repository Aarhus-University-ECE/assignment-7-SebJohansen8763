extern "C" {
#include "taylor_sine.h"
}
#include <math.h>
#include <stdio.h>
// Add your test cases for Exercise 1b,c) here
int main(int argc, char **argv)
{
    printf("Sin af 1\n");
    printf("Beregnet med ANSI C fra math.h: %.9lf\n", sin(1));
    printf("Beregnet med min taylor_sine funktion %.9lf\n\n", taylor_sine(1,5));

    printf("Sin af 10\n");
    printf("Beregnet med ANSI C fra math.h: %.9lf\n", sin(10));
    printf("Beregnet med min taylor_sine funktion %.9lf\n\n", taylor_sine(10,5));

    printf("Sin af 52.4\n");
    printf("Beregnet med ANSI C fra math.h: %.9lf\n", sin(52.4));
    printf("Beregnet med min taylor_sine funktion %.9lf\n\n", taylor_sine(1,5));

    printf("Sin af 0.481\n");
    printf("Beregnet med ANSI C fra math.h: %.9lf\n", sin(0.481));
    printf("Beregnet med min taylor_sine funktion %.9lf\n\n", taylor_sine(0.481,5));
    
    printf("Sin af 5.1512\n");
    printf("Beregnet med ANSI C fra math.h: %.9lf\n", sin(5.1512));
    printf("Beregnet med min taylor_sine funktion %.9lf\n\n", taylor_sine(5.1512,5));

    return 0;
}