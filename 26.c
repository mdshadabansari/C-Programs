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
	
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			
			//printf("( %d , %d )\n",arr[i],arr[j]);
			if(arr[i]==(5*arr[j])||arr[j]==(5*arr[i]))
				printf("( %d , %d )\n",arr[i],arr[j]);
		}
	}
}
