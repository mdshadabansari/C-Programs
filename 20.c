#include<stdio.h>
int main()
{
	int n,i,j,t;
	printf("Enter no. of elements you want to enter: ");
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
	{
		printf("Enter %d th element: ",i+1);
		scanf("%d",&arr[i]);
	}
/*	for(i=0;i<n;i++)
		printf("%d\n",arr[i]);*/
	
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(arr[i]>=arr[j])
			{
				t=arr[i];
				arr[i]=arr[j];
				arr[j]=t;
			}
		}
	}
	
	for(i=0;i<n;i++)
		printf("%d\n",arr[i]);
}
