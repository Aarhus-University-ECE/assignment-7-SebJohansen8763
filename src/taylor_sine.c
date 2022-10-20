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

double taylor_sine(double x, int n){
   
   int i = 1; // loop tæller der bestemmer om der skal tages fra eller ligges til
   int j = 3; // 
   double res = x;

   while(i<=n){
      if(i % 2 == 1){
         res -= pow(x , j)/factorial(j);
      }
      else{
         res += pow(x , j)/factorial(j);
      }
   }
{
   i++; //tilføjer 1 til int i
   j+=2; // tilføjer 2 til j
}
   
return res;

}