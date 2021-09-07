#include<stdio.h>

int factorial(int number)
{
    int fact=1;
    if(number <0)
    return -1;
    else if(number==0)
    return 1;
    else
   {        
    while(number!=0)
    {

       fact=fact*number; 
       number--;
     }
   return fact;
   }
  int main() 
  {
  int num = 0, N = 0;
  scanf("%d",&N);
  for(int i = 0; i< N; i++)
  {
    scanf("%d", &num);
    printf("%d\n",factorial(num));
  }
      return 0;
  }
}