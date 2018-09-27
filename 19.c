#include<stdio.h>
int main()
{
	int n,max,min,i;
	printf("Enter size of array: ");
	scanf("%d",&n);
	int a[n];
	printf("Enter array elements(%d numbers): \n",n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	max=min=a[0];
	for(i=0;i<n;i++)
	{
		if(a[i]>max)
			max=a[i];
		if(a[i]<min)
			min=a[i];
	}
	
	printf("Max: %d\nMin: %d\n\n",max,min);
}

	
	
