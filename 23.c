#include<stdio.h>
int main()
{
	int n,i,j,t,x,f=0,p;
	printf("Enter no. of elements you want to enter: ");
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
	{
		printf("Enter %d th element: ",i+1);
		scanf("%d",&arr[i]);
	}
	
	printf("Enter no. which you want to search: ");
	scanf("%d",&x);
	
	for(i=0;i<n;i++)
	{
		if(x==arr[i])
		{
			f=1;
			p=i;
			break;
		}
	}
	if(f==1)
		printf("Search successful, No. found at %d th location...\n\n",p);
	else
		printf("Search unsuccessful, No. not found...\n\n");
}
