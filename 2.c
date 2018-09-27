#include<stdio.h>
void main()
{
	int n,p,m;
	printf("\nEnter a number: ");
	scanf("%d",&n);
	p=1;
	while(n!=0)
	{
		m=n%10;
		p=p*m;
		n=n/10;
	}
	printf("Product of digits: %d\n\n",p);
}
