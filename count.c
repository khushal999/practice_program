
/* WAP for Count total zero and one in binary number */

#include<stdio.h>

void count(int dec)
{
	int zero=0, one=0, pos=0;
	while((sizeof(int)*8)!=pos)
	{
		if((dec >> pos) & 1)
			one++;
		else
			zero++;
		pos++;
	}
	
	printf("\n one: %d zero: %d",one,zero);
}

int main()
{
	int dec=0;
	
	printf("\n Enter a number: ");
	scanf("%d",&dec);

	count(dec);	

	return 0;
}
