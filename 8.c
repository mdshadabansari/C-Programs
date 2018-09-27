#include<stdio.h>
void main()
{
	int n,a,s=0,t,m;
	printf("Enter a number: ");
	scanf("%d",&n);
	t=n;
	while(n!=0)
	{
		m=n%10;
		s=s+(m*m*m);
		n=n/10;
	}
	if(t==s)
		printf("%d is armstrong number\n\n",t);
	else
		printf("%d is not armstrong number\n\n",t);
}
