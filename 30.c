#include<stdio.h>
#include<math.h>
int main()
{
	int m,n,i,j;
	printf("Enter row and columns: \n");
	scanf("%d %d",&m,&n);
	int arr[m][n],t[m][n];
	
	printf("Enter data into matrix: \n\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("Enter arr[%d][%d] th element: ",i,j);
			scanf("%d",&arr[i][j]);
		}
	}
	
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			t[j][i]=arr[i][j];
		}
	}
	
	printf("Original Matrix: \n\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d \t",arr[i][j]);
		}
		printf("\n");
	}
	
	
	printf("Transpose Matrix: \n\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d \t",t[i][j]);
		}
		printf("\n");
	}
}
	
