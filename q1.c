
/* WAP for convert decimal number into binary */


#include<stdio.h>

void dec_to_bin(int dec)
{
	long int bin=0;
	int rem=0,mul=1;
	do{
		rem = dec % 2;
		dec = dec / 2;
		bin = bin + (rem*mul);
		mul = mul * 10;

	}while(dec!=0);

	printf("\n Binary number is as : %ld",bin);
}

int main()
{
	int dec=0;
	
	printf("\n Enter a number for convert it into binary: ");
	scanf("%d",&dec);

	dec_to_bin(dec);	

	return 0;
}
