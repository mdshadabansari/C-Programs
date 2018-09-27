#include<stdio.h>
#include<math.h>
int main()
{
	int n,i,j,k;
	float mean,sum=0,sd;
	printf("Enter no. of elements you want to enter: ");
	scanf("%d",&n);
	int arr[n];
	
	for(i=0;i<n;i++)
	{
		printf("Enter %d th element: ",i+1);
		scanf("%d",&arr[i]);
		sum=sum+arr[i];
	}
	
	mean=sum/n;
	//printf("Mean: %.3f\n",mean);
	mean=pow(mean,2);
	sum=0;
	
	for(i=0;i<n;i++)
	{
		sum=sum+(pow(arr[i],2)-mean);
		//printf("%.3f\t%.3f\t%.3f\n",(pow(arr[i],2)),mean,(pow(arr[i],2)-mean));
	}
	
	sd=sum/n;
	
	printf("Standard Deviation: %.3f\n\n",sd);
}
	
	
