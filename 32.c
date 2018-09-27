#include<stdio.h>
#include<math.h>
int main()
{
	int m,n,i,j,rs=0,cs=0;
	printf("Enter row and columns: \n");
	scanf("%d %d",&m,&n);
	int arr[m][n];
	
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
			printf("%d \t",arr[i][j]);
		}
		printf("\n");
	}
	
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			rs=rs+arr[i][j];
			
		}
		printf("Sum of Row %d : %d\n",i,rs);
		rs=0;
		printf("\n\n");
	}
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			
			cs=cs+arr[j][i];
		}
		
		printf("Sum of Column %d : %d\n",i,cs);
		cs=0;
		printf("\n\n");
	}
}
	
