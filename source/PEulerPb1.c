#include "stdio.h"
#include "stdlib.h"
#include "ctype.h"
#include "string.h"

//If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.
//Find the sum of all the multiples of 3 or 5 below 1000.

int findTheSumOfMultiples(int n){

int i,sum = 0;

for(i=0; i<n; i++){

    if((i % 3 == 0) || (i % 5 == 0)){
        sum += i;
    }
}

return sum;

}

int main(){

   int n = 1000,sum;

   sum = findTheSumOfMultiples(n);

   printf("The sum of the all the multiples of 3 and 5 below 1000 is: %d",sum);

   return 0;
}
