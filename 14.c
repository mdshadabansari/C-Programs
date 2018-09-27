#include<stdio.h>
void main()
{
	int x,p,s=1,i,f;
	printf("Enter number: ");
	scanf("%d",&x);
	printf("Enter power: ");
	scanf("%d",&p);
	
	for(i=1;i<=p;i++)
	{
		s=s*x;
	}
	
	printf("Number %d raised to power %d is %d\n\n",x,p,s);
}
