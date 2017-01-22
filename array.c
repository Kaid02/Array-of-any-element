/*
	write a program to nread any element of any array.
*/	 
#include<stdio.h>
int main()
{
	int a[4],i;
	for(i=0;i<5;i++)
	{
		printf("Enter the number : \n");
		scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++)
	{
		printf("%d\n",a[i]);
	}
	return 0;
	}	
		
