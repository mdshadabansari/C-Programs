#include<stdio.h>
/*
int input()
{
	int n,i;
	printf("Enter size of array: ");
	int a[n];
	for(i=0;i<n;i++)
	{
		printf("Enter %d th element: ");
		scanf("%d",&a[i]);
	}
	return a[0];
}*/

void maxmin(int c,int *a)
{
	int i,j,t,min,max;
	for(i=0;i<c-1;i++)	
	{
		for(j=i;j<c;j++)
		{
			if(a[i]>a[j])
			{
				t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
		}
	}
	
	min=a[2];
	max=a[c-3];
	printf("3rd Minimum: %d\n3rd Maximum: %d\n",min,max);
}

int main()
{
	int n,i;
	printf("Enter size of array: ");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		printf("Enter %d th element: ",i);
		scanf("%d",&a[i]);
	}
	
	maxmin(n,a);
}
