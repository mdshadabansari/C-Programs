#include<stdio.h>
static int a;
int* sort(int c,int *a)
{
	int i,j,t;
	for(i=0;i<c-1;i++)
	{
		for(j=i;j<c;j++)
		{
			if(a[j]>a[j+1])
			{
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
	}
	return a;
}

int* input(int c,int *a)
{
	int i;
	for(i=0;i<c;i++)
	{
		printf("Enter %d th element: ",i);
		scanf("%d",&a[i]);
	}
	
	return a;
}
void display(int c,int *a)
{
	int i;
	printf("The element in sorted order are \n");
	for(i=0;i<c;i++)
		printf("%d ",a[i]);
}
int main()
{
	int n;
	printf("Enter size of array: ");
	scanf("%d",&n);
	int a[n];
	int *p,*q;
	
	p=input(n,a);
	q=sort(n,a);
	display(n,a);
	
	
}
