#include<stdio.h>
#include<math.h>
int main()
{	
	
	int r,i,j,k,s=0;
	printf("Enter AxA square matrix size: \n");
	scanf("%d",&r);
	int arr1[r][r],arr2[r][r],arr3[r][r];
	
	
	printf("Enter first matrix data: \n\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<r;j++)
		{
			printf("Enter arr1[%d][%d] th element: ",i,j);
			scanf("%d",&arr1[i][j]);
			
		}
	}
	
	printf("Enter second matrix data: \n\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<r;j++)
		{
			printf("Enter arr2[%d][%d] th element: ",i,j);
			scanf("%d",&arr2[i][j]);
			
		}
	}
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<r;j++)
		{
			for(k=0;k<r;k++)
			{
				s=s+arr1[i][k]*arr2[k][j];
			}
			arr3[i][j]=s;
			s=0;
		}
	}
	
	printf("Matrix 1: \n\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<r;j++)
		{
			printf("%d\t",arr1[i][j]);
		}
		printf("\n\n");
	}
	
	printf("Matrix 2: \n\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<r;j++)
		{
			printf("%d\t",arr2[i][j]);
		}
		printf("\n\n");
	}
	
	printf("Matrix 3: \n\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<r;j++)
		{
			printf("%d\t",arr3[i][j]);
		}
		printf("\n\n");
	}
}	
			
			
			
