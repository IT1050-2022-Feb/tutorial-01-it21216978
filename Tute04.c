/*Exercise 4 - Functions

Implement the three functions minimum(), maximum() and multiply() below the main() function.

Do not change the code given in the main() function when you are implementing your solution.*/

#include <stdio.h>
int maximum(int a,int b);
int minimum(int p,int q);
int multiply(int r,int s);

int main() {
   int no1, no2;
   printf("Enter a value for no 1 : ");
   scanf("%d", &no1);
   printf("Enter a value for no 2 : ");
   scanf("%d", &no2);
   printf("%d ", minimum(no1, no2));
   printf("%d ", maximum(no1, no2));
   printf("%d ", multiply(no1, no2));
   return 0;
}

int maximum(int a,int b)
{
	int max;
	
	if(a<b)
	max = b;
	
	else
	max = a;
	
	return max;	
}

int minimum(int p,int q)
{
	int min;
	
	if(p>q)
	min = q;
	
	else
	min = p;
	
	return min;
	
}

int multiply(int r,int s)
{
	int multy;
	
	multy = r * s ;
	
	return multy;
	
}
