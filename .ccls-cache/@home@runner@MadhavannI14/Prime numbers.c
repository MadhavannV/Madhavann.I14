// To print prime numbers within a range using functions

#include <stdio.h>
void printPrime(int lowervalue, int uppervalue)
{
  int i, j;
  for (i=lowervalue; i<uppervalue; i++)
    {
   for (j=2; j<=i/2; j++)
     {
       if (i%j==0)
       {
         printf("%d",i);
         break;
       }
       }
    }
  }
int main()
{
  int lowervalue, uppervalue;
  printf ("enter the lower value and upper value : ");
  scanf("%d %d",&lowervalue, &uppervalue);
  printf("The prime number from %d and %d are : \n",lowervalue, uppervalue);
  return 0;
}
