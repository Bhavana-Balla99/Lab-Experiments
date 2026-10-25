#include<stdio.h>

int main()
{ 
  int a,b,c,sum;
  float average;
  
  printf("Enter a value: ");
  scanf("%d", &a);
  
  printf("Enter b value: ");
  scanf("%d", &b);
  
  printf("Enter c value: ");
  scanf("%d", &c);
  
  sum=a+b+c;
  average =sum/3.0;
  
   printf("Sum = %d",sum);
   printf("\nAverage = %.2f", average);
   
   return 0;
}   
   
 
 
  
  