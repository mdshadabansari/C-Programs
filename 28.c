#include<stdio.h>
#include<math.h>
int main()
{	
	
	int m,n,i,j;
	float norm;
	printf("Enter row and columns: \n");
	scanf("%d %d",&m,&n);
	int arr1[m][n],arr2[m][n],arr3[m][n];
	
	printf("Enter first matrix data: \n\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("Enter arr1[%d][%d] th element: ",i,j);
			scanf("%d",&arr1[i][j]);
			
		}
	}
	
	printf("Enter second matrix data: \n\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("Enter arr2[%d][%d] th element: ",i,j);
			scanf("%d",&arr2[i][j]);
			
		}
	}
	
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			arr3[i][j]=arr1[i][j]+arr2[i][j];
			
		}
	}
	
	printf("Matrix 1: \n\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t",arr1[i][j]);
		}
		printf("\n\n");
	}
	
	printf("Matrix 2: \n\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t",arr2[i][j]);
		}
		printf("\n\n");
	}
	
	printf("Matrix 3: \n\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t",arr3[i][j]);
		}
		printf("\n\n");
	}
	
}
