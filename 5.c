#include<stdio.h>
void main()
{
	int n,p,c=0,i;
	printf("Enter a number: ");
	scanf("%d",&n);
	for(i=1;i<n;i++)
	{
		if(n%i==0)
		{
			c++;
			
		}
	}
	if(c==1)
		printf("%d is PRIME\n\n",n);
	else
		printf("%d is NOT PRIME\n\n",n);
}
