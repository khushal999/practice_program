
/* WAP for sum of digits of a giver number using recrsion */

#include<stdio.h>

int sum_of_digits(int num)
{
	static int sum=0;
	if(num==0)
		return sum;

	sum=sum + (num%10);
	return (sum_of_digits(num/10));
}

int main()
{
	int num=0;
	
	printf("\n Enter a number:: ");
	scanf("%d",&num);

	printf("\n Ans is: %d ",sum_of_digits(num));	

	return 0;
}
