
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

	printf("\n Enter number 1:: ");
	scanf("%d",&val1);
	
	printf("\n Enter number 2:: ");
	scanf("%d",&val2);
	
	arith(val1, val2, &add, &sub);

	printf("\n Addition is    : %d ",add);
	printf("\n Subtraction is : %d ",sub);	

	return 0;
}
