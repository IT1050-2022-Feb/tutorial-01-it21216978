/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  
 int mark1,mark2,sum;
 float average;

 printf("Enter subject mark 1 :");
 scanf("%d",&mark1);

 printf("Enter subject mark 2 :");
 scanf("%d",&mark2);

 sum = mark1 + mark2;

 average = sum / 2;

 printf("Average : %.2f",average);
 

  
  return 0;
}

