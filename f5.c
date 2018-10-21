#include<stdio.h>

void desasc(int c,int *a)
{
	int m,i,j,k,t;
	m=c/2;
	for(i=0;i<m-1;i++)
	{
		for(j=i;j<m;j++)
		{
			if(a[i]<a[j])
			{
				t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
		}
	}
	
	for(i=m;i<c-1;i++)
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
	
	for(i=0;i<c;i++)
		printf("%d ",a[i]);	
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
	
	desasc(n,a);
}
