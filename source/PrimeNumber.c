#include <stdio.h>
#include <stdbool.h>

bool checkIfNumberIsPrime(int a)
{
  int i;
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

  int a;

while(1){
  printf("Enter the number: ");
  scanf("%d",&a);

  if(a == 1)
  {
    printf("The number is neither Prime nor Composite\n");
  }
  else if (true == checkIfNumberIsPrime(a) && a != 0)
  {
      printf("The number is Prime. \n");
  }
  else
  {
      printf("The number is not Prime. \n");
  }
}
  return 0;
}

