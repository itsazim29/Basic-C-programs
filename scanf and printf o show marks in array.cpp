#include<stdio.h>
int main()
{
	int i;
	int marks[15];
	for(i=0;i<10;i++)
	{
		printf("enter the value of array");
		scanf("%d",&marks[i]);
	}
	for(i=0;i<10;i++)
	{
		printf("\n\t entered value in array=%d",marks[i]);
	}
	return 0;
}
