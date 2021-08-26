
/* WAP for return multiple values from function using pointers */

#include<stdio.h>

void arith(int val1, int val2, int *add, int *sub)
{
	*add = val1 + val2;
	*sub = val1 - val2;
}

int main()
{
	int val1=0, val2=0, add=0, sub=0;
	int *ptr1= &add, *ptr2= &sub;

	printf("\n Enter number 1:: ");
	scanf("%d",&val1);
	
	printf("\n Enter number 2:: ");
	scanf("%d",&val2);
	
	arith(val1, val2, ptr1, ptr2);

	printf("\n Addition is    : %d ",*ptr1);
	printf("\n Subtraction is : %d ",*ptr2);	

	return 0;
}
