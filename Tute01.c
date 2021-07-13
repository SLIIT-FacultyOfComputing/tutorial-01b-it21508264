/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  int a,b;
  float avg=0;
  int sum=0;

  printf("Enter the marks of first subject ");
  scanf("%d",& a);

  printf("Enter the marks of second subject ");
  scanf("%d",& b);

  sum = a+b;
  avg= sum/2.0;

  printf("Your Average Is.:%.2f",avg);

  
  
  return 0;
}

