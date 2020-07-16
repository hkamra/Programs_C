#include "stdio.h"
#include "stdlib.h"
#include "ctype.h"
#include "string.h"
#include "stdbool.h"

/*The prime 41, can be written as the sum of six consecutive primes:

41 = 2 + 3 + 5 + 7 + 11 + 13
This is the longest sum of consecutive primes that adds to a prime below one-hundred.

The longest sum of consecutive primes below one-thousand that adds to a prime, contains 21 terms, and is equal to 953.

Which prime, below one-million, can be written as the sum of the most consecutive primes?*/

bool checkIfNumberIsPrime(long a)
{
  long i;
  bool numberIsPrime = true;

  for(i=2; i<a; i++)
  {
      if((a % i == 0) && (a != i))
      {
          numberIsPrime = false;
          break;
      }
  }

  return numberIsPrime;
}

int main()
{

  long a,b,s = 0;
  long primeNums[10000];

  for(a=2; a<10000; a++)
  {
      if (true == checkIfNumberIsPrime(a))
      {
          primeNums[s] = a;
          s++;
      }
  }

  printf("Number of prime numbers until 1 Million are: %d\n",s);

/*  for(b=0; b<s; b++){

  printf("%d ",primeNums[b]);

  }
*/
  return 0;
}
