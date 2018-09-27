#include<stdio.h>
void main()
{
	int n,d,c,s=0,i;
	printf("Enter a number: ");
	scanf("%d",&n);
	d=0;
	printf("The no.s of divisors of %d are ",n);
	for(i=1;i<n;i++)
	{
		if(n%i==0)
		{
			printf("%d ",i);
			d++;
			s=s+i;
		}
	}
	if(s==n)
		printf("\n%d is perfect no.\n",n);
	else
		printf("\n%d is not perfect no.\n",n);
}
