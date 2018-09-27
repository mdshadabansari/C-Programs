#include<stdio.h>
#include<math.h>
int main()
{
	int m,n,i,j,s=0;
	float norm;
	printf("Enter row and columns: \n");
	scanf("%d %d",&m,&n);
	int arr[m][n];
	
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("Enter arr[%d][%d] th element: ",i,j);
			scanf("%d",&arr[i][j]);
			s=s+pow(arr[i][j],2);
		}
	}
	
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t",arr[i][j]);
		}
		printf("\n\n");
	}
	
	norm=sqrt(s);
	printf("Norm of the matrix is %.3f\n",norm);
}
	
