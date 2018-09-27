#include<stdio.h>
void main()
{
	int f1,f2,f3,i=1,n;
	printf("Enter number: ");
	scanf("%d",&n);
	f1=0;
	f2=0;
	f3=1;
	printf("Fibonacci Series: \n\n%d ",f1);
	while(i<n)
	{
		f1=f2;
		f2=f3;
		f3=f1+f2;
		printf("%d ",f3);
		i++;
	}
	printf("\n\n");
}
		

