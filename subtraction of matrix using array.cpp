#include<stdio.h>
int main()
{
	int a[5][5],b[5][5];
	int c[5][5];
	int i,j;
	
	printf("\enter the variables for the first matrix\n");
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("\t%d",&a[i][j]);
		}
		printf("\n");
	}
	printf("\enter the variables for the second matrix\n");
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("\t%d",&b[i][j]);
		}
		printf("\n");
	}
	printf("the subtraction  of two matrix variables are\n");
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			c[i][j]=a[i][j]-b[i][j];
			printf("%d\t",c[i][j]);
		}
		printf("\n");
	}
	return 0;	
}

	

