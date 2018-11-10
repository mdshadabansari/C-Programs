#include<stdio.h>

void minmax(int a[],int n,int *imax,int *imin)
{
	int i,max,min;
	max=a[0];
	min=a[0];
	for(i=0;i<n;i++)
	{
		if(a[i]>=max)
			max=a[i];
		if(a[i]<=min)
			min=a[i];
	}
	*imax=max;
	*imin=min;
}

int main()
{
	int n,i;
	printf("Enter size of array : ");
	scanf("%d",&n);
	
	int a[n];
	
	printf("Enter Array elements \n");
	for(i=0;i<n;i++)
	{
		printf("Enter %d the element : ",i);
		scanf("%d",&a[i]);
	}
	
	int max,min;
	minmax(a,n,&max,&min);
	
	printf("Maximum element :\t%d\nMinimum Element :\t%d",max,min);
}
