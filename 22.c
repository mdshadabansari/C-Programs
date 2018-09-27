#include<stdio.h>
int main()
{
	int n,i,j,x,p,t;
	printf("Enter no. of elements you want to enter: ");
	scanf("%d",&n);
	int arr[n],arr2[n+1];
	
	for(i=0;i<n;i++)
	{
		printf("Enter %d th element: ",i);
		scanf("%d",&arr[i]);
	}
	
	printf("Enter no. which you want to enter: ");
	scanf("%d",&x);
	
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
	{
		if(x<arr[i])
		{
			p=i;
			break;
		}
	}
	
	for(i=0;i<p;i++)
		arr2[i]=arr[i];
	arr2[p]=x;
	for(i=p+1;i<n+1;i++)
		arr2[i]=arr[i-1];
		
	for(i=0;i<n+1;i++)
		printf("%d\n",arr2[i]);
}
		
		
		
