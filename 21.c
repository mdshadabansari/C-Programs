#include<stdio.h>
int main()
{
	int n,i,j,k=0,p=0;
	printf("Enter no.of elements you want to enter: ");
	scanf("%d",&n);
	int arr[n],t[n];
	
	for(i=0;i<n;i++)
	{
		printf("Enter %d th element: ",i+1);
		scanf("%d",&arr[i]);
	}
	
	for(i=0;i<n;i++)
	{   
		for(j=0;j<=i;j++)
		{
			if(arr[i]==t[j])
			{
				p=1;
				break;
			}
		}
		if(p==0)
		{
			t[k]=arr[i];
			k++;
		}
		p=0;
	}
	
	for(i=0;i<k;i++)
		printf("%d\n",t[i]);
}
