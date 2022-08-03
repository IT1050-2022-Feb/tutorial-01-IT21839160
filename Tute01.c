/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main(void)
{
  int no1,no2,sum;
  float avg;
  printf("Input marks of two subjects");
  scanf("%d%d",&no1,&no2);
  sum=no1+no2;
  avg=sum/2;
  printf("Sum is:%d",sum);
  printf("Average is:%f",avg);
  return 0;
}

