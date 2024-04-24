#include<stdio.h>
main()
{
	int sum=0,i,j,k;
	int a[2][2],b[2][2],c[2][2];
	printf("Enter the first matrix\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d",&a[i][j]);	
		}
	}
	
	printf("Enter the second matrix\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d",&b[i][j]);	
		}
	}
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{    c[i][j]=0;
			for(k=0;k<2;k++)
			{
				c[i][j]+= a[i][k]*b[k][j];
			}
		}
	}
	printf("Multiplication Matrix :\n");
	for(i=0;i<2;i++)
	{
	    for(j=0;j<2;j++)
		{
		   printf("%d\t",c[i][j]);	
		}	
		printf("\n");
	}
}
