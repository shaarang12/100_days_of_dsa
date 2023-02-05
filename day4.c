#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int divide(int dividend, int divisor){
   if(dividend == 2147483648 && divisor == - 1) return 2147483647;
   bool sign = (dividend >= 0) == (divisor >= 0) ? 1 : 0;
   dividend = abs(dividend);
   divisor = abs(divisor);
   int res = 0;
   while (dividend - divisor >= 0){
       int count = 0;
       while(dividend - (divisor << 1 << count) >= 0){
           count ++;
       }
       res += 1 << count;
       dividend -= divisor << count;
   }
   return sign? res : -res;
}

int main(){
    int quotient = divide(2000,3);
    printf("Quotient: %d\n", quotient);
}