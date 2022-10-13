#include "taylor_sine.h"
#include <math.h>
#include <stdio.h>
#include <stdbool.h>

double factorial(int n){
   double result = 1;
   for (int i = 1;i < n + 1; i++ ){
    result *= i;
   }
   return result;
}

double taylor_sine(double x, int n)
{
   if(n == 1);
   return 1;
}
