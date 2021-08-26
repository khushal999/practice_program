
/* WAP for remove all occurace of a character from a string */

#include<stdio.h>

int main()
{
	char str[20],arr[20];
	char *ptr=str, ch='\0';
	int i=0;

	printf("\n Enter a string:: ");
	fgets(str, sizeof(str), stdin);
	
	printf("\n Enter Character to remove from string: ");
	scanf("%c",&ch);
		
	do
	{	if(*ptr!=ch)	
		{
			arr[i] = *ptr;
			i++;
		}
		ptr++;
		
	}while(*ptr!='\0'); 

	printf("\n Final string is: %s ",arr);	

	return 0;
}
